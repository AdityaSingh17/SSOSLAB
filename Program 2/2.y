	/* Develop, implement and execute a program using YACC to recognize all the strings ending with b preceded 
       by n number of a's, using the grammar (a^n)b. */
%{
    #include<stdio.h>
    #include<stdlib.h>
%}

%token A B

%%
input:S'\n' {printf("String accepted\n"); exit(0);}
S:A S1 B|B
S1:;|A S1
%%

int main() 
{
    printf("Enter string:\n");
    yyparse();    
    return 0;
}

int yyerror() 
{
    printf("String rejected\n");
    exit(0);
}
