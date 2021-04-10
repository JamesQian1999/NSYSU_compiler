%{

#include<stdio.h>
unsigned charCount = 1, idCount = 0, lineCount = 1, top;
char **table;
void print(int line, int pos, char str[], char symbol[]);
void create();
int lookup(char s[]);
void insert(char s[]);
void dump();

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


/* Integer Constants */
integer [+-][0-9]*

/* Float Constants */


/* String Constants */


/* Whitespace */
space [ \t]
eol \n

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

{integer} {
	print(lineCount, charCount, yytext, "integer" );
    charCount += yyleng;
}

{space} {
	charCount++;
}
{eol}   {
	lineCount++;
	charCount = 1;
}

. {
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
    table[top] = (char *)malloc(strlen(s)*sizeof(char *));
    table[top++] = s;
    table = (char **)realloc(table, sizeof(void *)*(top+1));
}

void dump()
{
    for(int i=0 ; i < top ; i++)
        printf("%s\n",table[i]);
}