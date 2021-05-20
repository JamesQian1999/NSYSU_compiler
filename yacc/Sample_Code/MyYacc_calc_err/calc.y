%{
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    extern int lineNum;
    int yylex();
    double ans = 0;
    void yyerror();
    char msg[256];
    char temp[256];
    int flag = 1;
%}
%union{
    float floatVal;
    int intVal;
}
%type <floatVal> NUMBER
%type <floatVal> expression term factor group
%token PLUS MINUS MUL DIV
%token LP RP
%token NUMBER NEWLINE

%%
lines: /* empty (epsilon)*/ /*{printf("1\n");}*/
    | lines expression NEWLINE {
        /* printf("2\n"); */
        if(flag == 1){
            printf("line %d: %s\t (ans = %1f)\n", lineNum, msg, $2);
            memset(msg, 0, 256);
      }
      else{
          flag = 1;
          memset(msg, 0, 256);
      }
    }
    ;
expression: expression PLUS {strcat(msg, " + ");} term {
        /* printf("3\n"); */
        $$ = $1 + $4;

    }
    | expression MINUS {strcat(msg, " - ");} term{
        /* printf("4\n"); */
        $$ = $1 - $4;
    }
    |  term {
        /* printf("5\n"); */
        $$ = $1;
    }
    ;
term: term MUL {strcat(msg, " * ");} factor {
        /* printf("6\n"); */
        $$ = $1 * $4;
    }
    | term DIV {strcat(msg, " / ");} factor {
        /* printf("7\n"); */
        $$ = $1 / $4;
    }
    | factor {
        /* printf("8\n"); */
        $$ = $1;
    }
    | error NUMBER { /* Error happened, discard token until it find NUMBER. */
        /* printf("9\n"); */
        yyerrok;     /* Error recovery. */
    }
    ;
factor: group {
        /* printf("10\n"); */
        $$ = $1;
    }
    | NUMBER {
        /* printf("11\n"); */
        $$ = $1;
        int d = (int)$1;
        sprintf(temp, "%d", d);
        strcat(msg, temp);
    }
    ;
group: LP {strcat(msg, " ( ");} expression RP{
        /* printf("12\n"); */
        strcat(msg, " ) ");
        $$ = $3;
    }
    ;
%%

int main(){
    yyparse();
    return 0;
}

void yyerror() {
	  printf("syntax error at line %d\n", lineNum+1);
      flag = 0;
};
