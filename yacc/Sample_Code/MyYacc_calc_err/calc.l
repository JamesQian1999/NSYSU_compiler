%{
#include "y.tab.h" // Remember to includ this header file
#include <stdio.h>
int lineNum = 0;
%}
Digit [0-9]+
%%
{Digit}	{
    sscanf(yytext, "%f", &yylval.floatVal); // floatVal is defined in "calc.y"
    return NUMBER;
}
\+ {
    return PLUS;
}
\- {
    return MINUS;
}
\* {
    return MUL;
}
\/ {
    return DIV;
}
\( {
    return LP;
}
\) {
    return RP;
}
\n {
    lineNum++;
    return NEWLINE;
}
. {
    return yytext[0];
}
%%

int yywrap(){
    return 1;
}
