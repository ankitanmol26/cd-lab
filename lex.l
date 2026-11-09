
%{
#include <stdio.h>
%}

%%
"int"|"float"|"char"|"if"|"else"|"while"|"return" {
    printf("%s : KEYWORD\n", yytext);
}

[a-zA-Z_][a-zA-Z0-9_]* {
    printf("%s : IDENTIFIER\n", yytext);
}

"+"|"-"|"*"|"/"|"="|"==" {
    printf("%s : OPERATOR\n", yytext);
}

[0-9]+ {
    printf("%s : NUMBER\n", yytext);
}

[ \t\n]+ ;

. {
    printf("%s : SPECIAL SYMBOL\n", yytext);
}
%%

int main()
{
    printf("Enter the source code:\n");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}
