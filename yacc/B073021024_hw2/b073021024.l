%{
#include "y.tab.h"
#include<stdio.h>
int newline_comment(char yytext[]);
int q, li ,ch;
char **table = NULL;
char *id,*t;
unsigned charCount = 1, idCount = 0, lineCount = 1,top=0,cc=0;
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
    t = (char*)malloc(sizeof(char)*strlen(yytext));
    strcpy(t,yytext);
    yylval.name = t;
    charCount+= yyleng;
    return TYPE;
}

void {
    printf("%s",yytext);
    charCount+= yyleng;
    return VOID;
}

static {
    printf("%s",yytext);
    charCount+= yyleng;
    return STATIC;
}

final {
    printf("%s",yytext);
    charCount+= yyleng;
    return FINAL;
}

class {
    printf("%s",yytext);
    charCount+= yyleng;
    return CLASS;
}

main {
    printf("%s",yytext);
    charCount+= yyleng;
    return MAIN;
}

new {
    printf("%s",yytext);
    charCount+= yyleng;
    return NEW;
}

public {
    printf("%s",yytext);
    charCount+= yyleng;
    return PUBLIC;
}

protected {
    printf("%s",yytext);
    charCount+= yyleng;
    return PROTECTED;
}

private {
    printf("%s",yytext);
    charCount+= yyleng;
    return PRIVATE;
}

read {
    printf("%s",yytext);
    charCount+= yyleng;
    return READ;
}

print {
    printf("%s",yytext);
    charCount+= yyleng;
    return PRINT;
}

const {
    printf("%s",yytext);
    charCount+= yyleng;
    return CONST;
}

if {
    printf("%s",yytext);
    charCount+= yyleng;
    return IF;
}

elseif {
    printf("%s",yytext);
    charCount+= yyleng;
    return ELSEIF;
}

case {
    printf("%s",yytext);
    charCount+= yyleng;
    return CASE;
}

break {
    printf("%s",yytext);
    charCount+= yyleng;
    return BREAK;
}

default {
    printf("%s",yytext);
    charCount+= yyleng;
    return DEFAULT;
}

for {
    printf("%s",yytext);
    charCount+= yyleng;
    return FOR;
}

do {
    printf("%s",yytext);
    charCount+= yyleng;
    return DO;
}

while {
    printf("%s",yytext);
    charCount+= yyleng;
    return WHILE;
}

continue {
    printf("%s",yytext);
    charCount+= yyleng;
    return CONTINUE;
}

return {
    printf("%s",yytext);
    charCount+= yyleng;
    return RETURN;
}

{Semicolon} {
    printf("%s",yytext);
    charCount+= yyleng;
    return SEMICOLON;
}

{Colon} {
    printf("%s",yytext);
    charCount+= yyleng;
    return COLON;
}

{Comma} {
    printf("%s",yytext);
    charCount+= yyleng;
    return COMMA;
}

\. {
    printf("%s",yytext);
    charCount+= yyleng;
    return DOT;
}

{square_brackets_l} {
    printf("%s",yytext);
    charCount+= yyleng;
    return square_brackets_l;
}
{square_brackets_r} {
    printf("%s",yytext);
    charCount+= yyleng;
    return square_brackets_r;
}

{Brackets_l} {
    printf("%s",yytext);
    if(q) printf("\nLine %d, 1st char: %d, syntax error at \"*\"",li,ch);
    q = 0;
    charCount+= yyleng;
    return Brackets_l;
}
{Brackets_r} {
    printf("%s",yytext);
    charCount+= yyleng;
    return Brackets_r;
}

{Parentheses_l} {
    printf("%s",yytext);
    charCount+= yyleng;
    return Parentheses_l;
}
{Parentheses_r} {
    printf("%s",yytext);
    charCount+= yyleng;
    return Parentheses_r;
}

{assignment} {
    printf("%s",yytext);
    charCount+= yyleng;
    return EQUAL;
}

{addadd} {
    printf("%s",yytext);
    charCount+= yyleng;
    return DOUBLEPLUS; 
}

{subsub} {
    printf("%s",yytext);
    charCount+= yyleng;
    return DOUBLEMINUS;
}

{add} {
    printf("%s",yytext);
    charCount+= yyleng;
    return PLUS;
}

{sub} {
    printf("%s",yytext);
    charCount+= yyleng;
    return MINUS;
}

{mul} {
    printf("%s",yytext);
    charCount+= yyleng;
    return MULTIPLY;
}

{div} {
    printf("%s",yytext);
    charCount+= yyleng;
    return DIVIDE;
}

{and} {
    printf("%s",yytext);
    charCount+= yyleng;
    return AND;
}

{or} {
    printf("%s",yytext);
    charCount+= yyleng;
    return OR;
} 

{integer} {
    printf("%s",yytext);
    charCount+= yyleng;
    return INT;
}

{float} {
    printf("%s",yytext);
    charCount+= yyleng;
    return FLOAT;
}

{id} {
    printf("%s",yytext);
    charCount+= yyleng;
    if(table == NULL) create();
    char *id = (char*)malloc(sizeof(char)*strlen(yytext));
    strcpy(id,yytext);
    yylval.name = id;
    insert(yytext);
    return ID;
}

{invalid_id} {
    printf("%s",yytext);
    charCount+= yyleng;
    return INVALID;
}

{string} {
    printf("%s",yytext);
    charCount+= yyleng;
    return STRING;
}

{Condition} {
    printf("%s",yytext);
    charCount+= yyleng;
    return INFIXOP;
}

{space} {
    printf("%s",yytext);
    charCount+= yyleng;
}
{eol} {
    printf("\nLine %d : ",++lineCount);
    charCount = 1;
}

{comment} {
    lineCount += newline_comment(yytext);
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
    if(strcmp(s, "w") ==0)
    { 
        if(!cc) {cc++;return -1;}
        return -2;
    }
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
}

void dump()
{
    printf("The symbol table contains:\n");
    for(int i = 0 ; i < top ; i++)
        printf("%s ",table[i]);
    printf("\n");
}