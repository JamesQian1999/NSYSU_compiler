%{

    int count = 0;

%}

%%

[A-Z]   {
        printf("%s capital letter\n", yytext);
        count++;
    }
.       {
        printf("%s not a capital letter\n", yytext);
    }
\n      {
        printf("There are %d capital letters.\n",count);
        return 0;
    }

%%

int main(){
    yylex();
return 0;
}