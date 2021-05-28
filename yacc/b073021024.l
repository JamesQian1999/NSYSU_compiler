%{
#include "y.tab.h"
#include<stdio.h>
int newline_comment(char yytext[]);
char **table = NULL;
char* id;
unsigned charCount = 1, idCount = 0, lineCount = 1,top=0;
void create();
int lookup(char s[]);
void insert(char s[]);
void dump();
%}


/* type */
type char|float|int|long|short|string|boolean

/* symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses_l \(
Parentheses_r \)
square_brackets_l \[
square_brackets_r \]
Brackets_l \{
Brackets_r \}

/* Arithmetic, Relational, and Logical Operators */
add \+ 
addadd \+\+
sub \- 
subsub \-\-
mul \*
div \/|\%
assignment \=
and \&\&
or \|\|

lt \<
lte \<\=
gt \>
gte \>\=
eq \=\=
neq \!\=
not \!
Condition {lt}|{lte}|{gt}|{eq}|{neq}|{not}


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
 
{type} {
    printf("%s",yytext);
    return TYPE;
}

void {
    printf("%s",yytext);
    return VOID;
}

static {
    printf("%s",yytext);
    return STATIC;
}

final {
    printf("%s",yytext);
    return FINAL;
}

class {
    printf("%s",yytext);
    return CLASS;
}

main {
    printf("%s",yytext);
    return MAIN;
}

new {
    printf("%s",yytext);
    return NEW;
}

public {
    printf("%s",yytext);
    return PUBLIC;
}

protected {
    printf("%s",yytext);
    return PROTECTED;
}

private {
    printf("%s",yytext);
    return PRIVATE;
}

read {
    printf("%s",yytext);
    return READ;
}

print {
    printf("%s",yytext);
    return PRINT;
}

const {
    printf("%s",yytext);
    return CONST;
}

if {
    printf("%s",yytext);
    return IF;
}

elseif {
    printf("%s",yytext);
    return ELSEIF;
}

case {
    printf("%s",yytext);
    return CASE;
}

break {
    printf("%s",yytext);
    return BREAK;
}

default {
    printf("%s",yytext);
    return DEFAULT;
}

for {
    printf("%s",yytext);
    return FOR;
}

do {
    printf("%s",yytext);
    return DO;
}

while {
    printf("%s",yytext);
    return WHILE;
}

continue {
    printf("%s",yytext);
    return CONTINUE;
}

return {
    printf("%s",yytext);
    return RETURN;
}

{Semicolon} {
    printf("%s",yytext);
    return SEMICOLON;
}

{Colon} {
    printf("%s",yytext);
    return COLON;
}

{Comma} {
    printf("%s",yytext);
    return COMMA;
}

\. {
    printf("%s",yytext);
    return DOT;
}

{square_brackets_l} {
    printf("%s",yytext);
    return LEFTTMB;
}
{square_brackets_r} {
    printf("%s",yytext);
    return RIGHTTMB;
}

{Brackets_l} {
    printf("%s",yytext);
    return LEFTBRK;
}
{Brackets_r} {
    printf("%s",yytext);
    return RIGHTBRK;
}

{Parentheses_l} {
    printf("%s",yytext);
    return LEFTTB;
}
{Parentheses_r} {
    printf("%s",yytext);
    return RIGHTTB;
}

{assignment} {
    printf("%s",yytext);
    return EQUAL;
}

{addadd} {
    printf("%s",yytext);
    return DOUBLEPLUS; 
}

{subsub} {
    printf("%s",yytext);
    return DOUBLEMINUS;
}

{add} {
    printf("%s",yytext);
    return PLUS;
}

{sub} {
    printf("%s",yytext);
    return MINUS;
}

{mul} {
    printf("%s",yytext);
    return MULTIPLY;
}

{div} {
    printf("%s",yytext);
    return DIVIDE;
}

{and} {
    printf("%s",yytext);
    return AND;
}

{or} {
    printf("%s",yytext);
    return OR;
}

{integer} {
    printf("%s",yytext);
    return INT;
}

{float} {
    printf("%s",yytext);
    return FLOAT;
}

{id} {
    printf("%s",yytext);
    if(table == NULL) create();
    char *id = (char*)malloc(sizeof(char)*strlen(yytext));
    strcpy(id,yytext);
    yylval.name = id;
    insert(yytext);
    return ID;
}

{invalid_id} {
    printf("%s",yytext);
    return INVALID;
}

{string} {
    printf("%s",yytext);
    return STRING;
}

{Condition} {
    printf("%s",yytext);
    return INFIXOP;
}

{space} {
    printf("%s",yytext);
}
{eol} {
    printf("\nLine %d : ",++lineCount);
}

{comment} {
    lineCount += newline_comment(yytext);
}

. {
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
    for (int i = 0 ; i <top ; i++)
    {
        if(strlen(s) != strlen(table[i])) continue;
        for(int j = 0 ; j <strlen(table[i]) ; j++)
            if(table[i][j]!=s[j]) goto next;
        return ;
        next:;
    } 

    char *id = (char*)malloc(sizeof(char)*strlen(s));
    for(int i = 0 ; i<strlen(s) ; i++)
        id[i] = s[i];
    table[top] = (char *)malloc(strlen(s)*sizeof(char *));
    table[top++] = id;
    table = (char **)realloc(table, sizeof(void *)*(top+1));
    //printf("\n");
    //dump();
    //printf("\n");
}

void dump()
{
    printf("The symbol table contains:\n");
    for(int i = 0 ; i < top ; i++)
        printf("%s ",table[i]);
    printf("\n");
}