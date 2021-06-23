%{
#include <stdio.h>
#include "B073040047.tab.h"

unsigned long long cpos = 1, tokc = 0, lc = 1;
char full_line[1024];
char tok[80];
%}

ID           [A-Za-z_\$][_[:alnum:]\$]*
Integer      \-?[0-9]+
Float        [+-]?([0-9]+(\.[0-9]+)?|\.[0-9]+)([eE][+-]?[0-9]+)?[fF]?
String       \"([^\\\"]|\\\")*\"
Whitespace   [\ \t]
Comments     \/\*[^*]*\*+(?:[^\/\*][^*]*\*+)*\/|\/\/.*\n
Newline      \r?\n

Single_char [\{\}\[\]\(\)\!\=\%\/\*\-\+\<\>\;\:\,]

%%

{Whitespace} {
    cpos += yyleng;
    strcat(full_line, yytext);
}

{Newline} {
    cpos = 1;
    printf("%lld: %s\n", lc, full_line);
    fflush(stdout);
    full_line[0] = 0;
    lc++;
}


"++" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return PP;
}
"--" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return MM;
}
"<=" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return LE;
}
">=" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return GE;
}
"==" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return EQ;
}
"!=" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return NE;
}
"&&" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return AND;
}
"||" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return OR;
}
"boolean" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return BOOLEAN;
}
"char" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return CHAR;
}
"class" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return CLASS;
}
"else" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return ELSE;
}
"final" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return FINAL;
}
"float" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return FLOAT;
}
"for" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return FOR;
}
"if" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return IF;
}
"int" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return INT;
}
"main" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return MAIN;
}
"new" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return NEW;
}
"print" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return PRINT;
}
"return" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return RETURN;
}
"static" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return STATIC;
}
"void" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return VOID;
}
"while" {
    cpos += yyleng;
    strcat(full_line, yytext); 
    return WHILE;
}

{Comments} {
    cpos += yyleng;

    // Print the comment

    // Clean the buffer
    printf("%lld: %s", lc, full_line);
    full_line[0] = 0;

    for(int i = 0; i < yyleng; i++){
        putchar(yytext[i]);
        if(yytext[i] == '\n' && (cpos = 1) && i != yyleng-1)
            printf("%lld: ", ++lc);
    }
    fflush(stdout);
}

{Integer} {
    cpos += yyleng;
    strcat(full_line, yytext);
    return INT_L;
}

{Float} {
    cpos += yyleng;
    strcat(full_line, yytext);
    return FLOAT_L;
}

{String} {
    cpos += yyleng;
    strcat(full_line, yytext);
    return STR;
}

{ID} {
    cpos += yyleng;
    for(int i = 0; i < 80; i++)
        tok[i] = 0;
    strcpy(tok, yytext);
    strcat(full_line, yytext);
    return ID;
}

{Single_char} {
    strcat(full_line, yytext);
    return yytext[0];
}

%%

// Remove main
