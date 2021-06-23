%{
#include <stdio.h>
int yylex();
double ans = 0;
void yyerror(const char* message) {
    printf("Invaild format\n");
};
%}
%union {
    float 	floatVal;
    int 	intVal;
}
%type <floatVal> NUMBER
%type <floatVal> expression term factor group
%token PLUS MINUS MUL DIV
%token LP RP
%token NUMBER NEWLINE
%%
lines :/* empty */
	| lines expression NEWLINE {printf("%lf\n", $2);}
	;
expression : term { $$ = $1; }
	| expression PLUS term { $$ = $1 + $3; }
	| expression MINUS term { $$ = $1 - $3; }
	;
term : factor {  $$ = $1; }
	| term MUL factor { $$ = $1 * $3; }
	| term DIV factor { $$ = $1 / $3; }
	;
factor : NUMBER { $$ = $1;}
	| group {$$ = $1; }
	;
group : LP expression RP { $$ = $2; }
	;
%%
int main() {
    yyparse();
    return 0;
}
