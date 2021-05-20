%{

#include <stdio.h>
int yylex();
double ans = 0;
void yyerror(const char* message)
{
    //printf("Invaild format: %s\n",message);
};
%}

%union {
    float floatVal;
    int intVal;
}

%token COMMA NUM ADD COLON a NEW
%type test 


%%

test : NUM COMMA NEW | NUM COMMA test |  error NEW {
    printf("error N\n");
    yyerrok;
} 


%%

int main() 
{
    printf("Line 1 : ");
    yyparse();
    return 0;
}
