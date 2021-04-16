%{

#include<stdio.h>
unsigned charCount = 1, idCount = 0, lineCount = 1, top;
char **table;
void print(int line, int pos, char str[], char symbol[]);
void create();
int lookup(char s[]);
void insert(char s[]);
void dump();
int newline_comment(char yytext[]);

%}

/* symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses \(|\)
square_brackets \[|\]
Brackets \{|\}
symbol {Comma}|{Colon}|{Semicolon}|{Parentheses}|{square_brackets}|{Brackets}

/* Arithmetic, Relational, and Logical Operators */
addition1 \+ 
addition2 \+\+
subtraction1 \- 
subtraction2 \-\-
multiplication \*
division \/|\%
assignment \=
relational \<|\<\=|\>\=|\>|\=\=|\!\=
logical \&\&|\|\||\!
operator {addition1}|{addition2}|{subtraction1}|{subtraction2}|{multiplication}|{division}|{assignment}|{relational}|{logical}

/* Reserved words */
reserved_word boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while

/* Identifiers */
id [a-zA-Z_][a-zA-Z0-9_]*
invalid_id [0-9]+[a-zA-Z]+[a-zA-Z0-9_]*|[\^\#]+[a-zA-Z0-9_]*

/* Integer Constants */
integer [+-]?[0-9]+

/* Float Constants */
float [+-]?[0-9]*\.[0-9]+|[+-]?[0-9]*\.[0-9]+[eE][+-][0-9]+

/* String Constants */
string \"([^\'\\\"]|[\\][\"\'\\trnbf])*\"
invalid_string \"([^\\][\\\']|[^\'\\\"]|[\\][\"\'\\trnbf])*\"

/* Whitespace */
tab \t
blank [\ ]
space {tab}|{blank}
eol \n?\r?

/* Comments */
c_style \/\*[^\*]*\*+([^\/\*][^\*]*\*+)*\/
cpp_style "//"(\/|\*|.)*
comment {c_style}|{cpp_style}

%%

{symbol} {
	print(lineCount, charCount, yytext, "symbol" );
    charCount += yyleng;
}

{operator} {
	print(lineCount, charCount, yytext, "operator");
	charCount += yyleng;
}

{reserved_word} {
	print(lineCount, charCount, yytext, "reserved word" );
    charCount += yyleng;
}

{id} {
	print(lineCount, charCount, yytext, "id" );
    insert(yytext);
    charCount += yyleng;
}

{invalid_id} {
	print(lineCount, charCount, yytext, "invalid id" );
    charCount += yyleng;
}

{integer} {
	print(lineCount, charCount, yytext, "integer" );
    charCount += yyleng;
}

{float} {
	print(lineCount, charCount, yytext, "float" );
    charCount += yyleng;
}

{string} {
    print(lineCount, charCount, yytext, "string" );
    charCount += yyleng;
}

{invalid_string} {
    print(lineCount, charCount, yytext, "invalid_string" );
    charCount += yyleng;
}

{space} {
	charCount++;
}

{eol}   {
	lineCount++;
	charCount = 1;
}

{comment} {

	print(lineCount, charCount, yytext, "comment" );
    lineCount += newline_comment(yytext);
}

. {
	printf("error!\n");
	charCount++;
}

%%

int main(){
	create();
    yylex();
    dump();
	return 0;
 }

void print(int line, int pos, char str[], char symbol[])
{
    printf("Line: %d, 1st char: %d, \"%s\" is a \"%s\".\n",line, pos, str, symbol);
}

void create()
{
    table = (char **)malloc(sizeof(void *));
    top = 0;
}

int lookup(char s[])
{
    for (int i = 0 ; i <top ; i++)
    {
        if(strlen(s) != strlen(table[i])) continue;
        for(int j = 0 ; j <strlen(table[i]) ; j++)
            if(table[i][j]!=s[j]) goto next;
        return i;
        next:;
    } 
    return -1;  
}

void insert(char s[])
{
    if(lookup(s) != -1) return;
    char *id = (char*)malloc(sizeof(char)*strlen(s));
    for(int i = 0 ; i<strlen(s) ; i++)
        id[i] = s[i];
    table[top] = (char *)malloc(strlen(s)*sizeof(char *));
    table[top++] = id;
    table = (char **)realloc(table, sizeof(void *)*(top+1));
}

void dump()
{
    printf("The symbol table contains:\n");
    for(int i = 0 ; i < top ; i++)
        printf("%s ",table[i]);
    printf("\n");
}

int newline_comment(char yytext[])
{
    int ans = 0;
    for(int i = 0 ; i < strlen(yytext) ; i++)
        if(yytext[i] == '\n')
            ans++;
    return ans;
}
