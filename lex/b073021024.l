%{

#include <stdio.h>
char **table;
int top, line = 1 , pos = 1;
void create();
int lookup(char s[]);
int insert(char s[]);
void dump();

%}

/* symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses \(|\)
square_brackets \[|\]
Brackets \{|\}
Symbol {Comma}|{Colon}|{Semicolon}|{Parentheses}|{square_brackets}|{Brackets}

/* Arithmetic, Relational, and Logical Operators */
addition1 \+ 
addition2 \+\+
subtraction1 \- 
subtraction2 \-\-
multiplication \*
division \/ | \%
assignment \=
relational \< | \<\= | \>\=  | \> |  \=\= | \!\=
logical \&\& | \|\| | \!

/* Reserved words */
Reserved_word boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while

/* Identifiers */

/* Integer Constants */

/* Float Constants */

/* String Constants */

/* Whitespace */

/* Comments */

%%

{Symbol} {
    printf("%s\n",yytext);
}


%%

int main(){
    yylex();
    create();
    dump();
    return 0;
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

int insert(char s[])
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