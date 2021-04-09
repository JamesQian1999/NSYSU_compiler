%{

#include <stdio.h>
void create();
int lookup(char s[]);
int insert(char s[]);
void dump();

%}

/* symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses \( | \)
square_brackets \[ | \]
Brackets \{ | \}
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



%%

int main(){
    yylex();
    return 0;
}

void create()
{

}
int lookup(char s[])
{

}
int insert(char s[])
{

}
void dump()
{

}