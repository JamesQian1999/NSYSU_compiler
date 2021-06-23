%{
#include <stdio.h>
#include <ctype.h>
#include "lib/symbol_table.h"

unsigned long long cpos = 1, tokc = 0, lc = 1;
void logger(unsigned long long _line, unsigned long long _pos, 
            const char *_type, const char *_str);
int newline_in_comment(const char * _str);
%}


/* The flex does not fit the POSIX regex... */
Reserved_word boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while|final|finally|float
ID           [A-Za-z_\$][_[:alnum:]\$]*
Integer      \-?[0-9]+
Float        [+-]?([0-9]+(\.[0-9]+)?|\.[0-9]+)([eE][+-]?[0-9]+)?[fF]?
String       \"([^\\\"]|\\\")*\"
Whitespace   [\ \t]
Comments     \/\*[^*]*\*+(?:[^\/*][^*]*\*+)*\/|\/\/.*\n
Newline      \r?\n

/* Symbols */
Comma \,
Colon \:
Semicolon \;
Parentheses \(|\)
Square_Brackets \[|\]
Brackets \{|\}
Symbol {Comma}|{Colon}|{Semicolon}|{Parentheses}|{Square_Brackets}|{Brackets}

/* Operators */
Addition_OP1 \+
Addition_OP2 \+\+
Addition {Addition_OP1}|{Addition_OP2}
Subtraction_OP1 \-
Subtraction_OP2 \-\-
Subtraction {Subtraction_OP1}|{Subtraction_OP2}
Multiplication \*
Division \/
Module \%
Assignment \=

Smaller \<
Smaller_Equal \<\=
Bigger \>
Bigger_Equal \>\=
Equal \=\=
Not_Equal \!\=
Relational {Smaller}|{Smaller_Equal}|{Bigger}|{Bigger_Equal}|{Equal}|{Not_Equal}

AND \&\&
OR \|\|
NOT \!
Logical {AND}|{OR}|{NOT}

Operator {Addition}|{Subtraction}|{Multiplication}|{Division}|{Module}|{Assignment}|{Relational}|{Logical}

Non_ID \ [^A-Za-z_\$\*\"\ =\+\-\/\(][_[:alnum:]\$]*[^\)\;\ \r\.\n0-9]

Single_quote \'[^\']*\'
Tri_double_qoute \"\"\"
Non_string {Single_quote}|{Tri_double_qoute}

%%

{Whitespace} {
    cpos += yyleng;
}

{Newline} {
    lc++;
    cpos = 1;
}

{Comments} {
    logger(lc, cpos, "comment", yytext);
    cpos += yyleng;
    lc += newline_in_comment(yytext);
}

{Symbol} {
    logger(lc, cpos, "symbol", yytext);
    cpos += yyleng;
}

{Operator} {
    logger(lc, cpos, "operator", yytext);
    cpos += yyleng;
}

{Reserved_word} {
    logger(lc, cpos, "reserved word", yytext);
    cpos += yyleng;
}

{Integer} {
    logger(lc, cpos, "integer", yytext);
    cpos += yyleng;
}

{Float} {
    logger(lc, cpos, "float", yytext);
    cpos += yyleng;
}

{String} {
    logger(lc, cpos, "string", yytext);
    cpos += yyleng;
}

{Non_string} {
    logger(lc, cpos, "invalid string", yytext);
    cpos += yyleng;
}

{ID} {
    logger(lc, cpos, "ID", yytext);
    insert(yytext);
    cpos += yyleng;
}

{Non_ID} {
    logger(lc, cpos, "invalid ID", yytext + 1);
    cpos += yyleng;
}

. {
    logger(lc, cpos, "error", yytext);
    cpos += yyleng;
}

%%

void logger(unsigned long long _line, unsigned long long _pos,
            const char *_type, const char *_str)
{
    printf("Line: %lli, 1st char: %lli, \"%s\" is a \"%s\".\n", _line, _pos, _str, _type);
}

int newline_in_comment(const char * _str){
    int num = 0;
    size_t len = strlen(_str);
    for (size_t i = 0; i < len; i++){
        if (i == '\n')
        num++;
    }
    return num;
}

int main(){
    yylex();
    dump();
}
