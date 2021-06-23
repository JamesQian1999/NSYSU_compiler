%{
#include<stdio.h>
unsigned charCount = 1, idCount = 0, lineCount = 1;
%}
operator [\+\-\*\/]
space [ \t]
eol \n

/* You should write your own regular expression. */
reserved_word
symbol
id
%%
{operator} {
	printf("Line: %d, 1st char: %d, \"%s\" is an \"operator\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}
{space} {
	charCount++;
}
{eol}   {
	lineCount++;
	charCount = 1;
}
{reserved_word} {
	/* You shold write your own code */
}
{symbol} {
	/* You shold write your own code */
}

{id} {
	/* You shold write your own code */
}

%%
int main(){
	yylex();
	return 0;
 }
