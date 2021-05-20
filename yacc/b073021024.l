%{
#include "y.tab.h"
#include<stdio.h>
int newline_comment(char yytext[]);
char **table = NULL;
unsigned charCount = 1, idCount = 0, lineCount = 1,top;
void create();
int lookup(char s[]);
void insert(char s[]);
%}

/* symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses \(|\)
square_brackets \[|\]
Brackets \{|\}

/* Arithmetic, Relational, and Logical Operators */
add \+ 
addadd \+\+
sub \- 
subsub \-\-
mul \*
div \/|\%
assignment \=
lt \<
lte \<\=
gt \>
gte \>\=
eq \=\=
neq \!\=
and \&\&
or \|\|
not \!

/* Reserved words */
reserved_word abstract|assert|boolean|break|byte|case|catch|char|class|const|default|do|double|else|enum|extends|false|final|finally|float|for|goto|if|implements|import|instanceof|int|interface|long|native|new|null|package|private|protected|public|return|short|static|strictfp|super|switch|synchronized|this|throw|throws|transient|true|try|void|volatile|while|continue

/* Identifiers */
id [a-zA-Z_\$][a-zA-Z0-9_\$]*
invalid_id [0-9]+[a-zA-Z\$\^\#]+[a-zA-Z0-9_\$\^\#]*|[\^\#]+[a-zA-Z0-9_\$\^\#]*

/* Integer Constants */
integer [-]?[0-9]+

/* Float Constants */
float [+-]?[0-9]*\.[0-9]+f?|[+-]?[0-9]*\.[0-9]+[eE][+-][0-9]+f?

/* String Constants */
string \"([^\'\\\"]|[\\][\"\'\\trnbf])*\"
invalid_string \"([^\\][\\\']|[^\'\\\"]|[\\][\"\'\\trnbf])*\"

/* Whitespace */
tab \t
blank [\ ]
space {tab}|{blank}
eol \r?\n

/* Comments */
c_style \/\*[^\*]*\*+([^\/\*][^\*]*\*+)*\/
cpp_style \/\/.*
comment {c_style}|{cpp_style}

%%

{Comma} {
    printf("%s",yytext);
    return COMMA;
}
{Colon} {
    printf("%s",yytext);
    
}
{Semicolon} {
    printf("%s",yytext);
}
{Parentheses} {
    printf("%s",yytext);
}
{square_brackets} {
    printf("%s",yytext);
}
{Brackets} {
    printf("%s",yytext);
}

{add} {
    printf("%s",yytext);
    
}
{addadd} {
    printf("%s",yytext);
}
{sub} {
    printf("%s",yytext);
}
{subsub} {
    printf("%s",yytext);
}
{mul} {
    printf("%s",yytext);
}
{div} {
    printf("%s",yytext);
}
{assignment} {
    printf("%s",yytext);
}
{lt} {
    printf("%s",yytext);
}
{lte} {
    printf("%s",yytext);
}
{gt} {
    printf("%s",yytext);
}
{gte} {
    printf("%s",yytext);
}
{eq} {
    printf("%s",yytext);
}
{neq} {
    printf("%s",yytext);
}
{and} {
    printf("%s",yytext);
}
{or} {
    printf("%s",yytext);
}
{not} {
    printf("%s",yytext);
}

{id} {
    printf("%s",yytext);
    if(table == NULL) create();
}

{integer} {
    printf("%s",yytext);
    return NUM;
}
{float} {
    printf("%s",yytext);
    
}

{string} {
    printf("%s",yytext);
}

{space} {
    printf("%s",yytext);
}
{eol} {
    printf("\nLine %d : ",++lineCount);
    return NEW;
}

{comment} {
    lineCount += newline_comment(yytext);
}

. {
	return a;
}

%%

int yywrap(){
    return 1;
} 

int newline_comment(char yytext[])
{
    int ans = 0;
    for(int i = 0 ; i < strlen(yytext) ; i++)
    {
        if(yytext[i] == '\n')
        {
            ans++;
            printf("\nLine %d : ",lineCount+ans);
        }
        else
            printf("%c",yytext[i]);
    }
    return ans;
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

// sscanf(yytext, "%d", &yylval.intVal);
// sscanf(yytext, "%f", &yylval.floatVal);