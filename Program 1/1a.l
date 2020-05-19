	/* Lex program to identify a valid arithmetic expression. Identifiers will be integers and operators can
	   be + or *. Count the identifiers and operators and print them separately. */
%{
	#include<stdio.h>
	int id=0,optr=0,p=0;
%}

%%
[0-9]+	{id++;
	 printf("The identifier is %s\n",yytext);
	}
[+*]	{optr++;
	 printf("The operator is %s\n",yytext);
	}
[(]	p++;
[)]	p--;
%%

int main()
{
	printf("Enter an expression\n");
	yylex();
	if(id==optr+1 && p==0 && optr>=1)
	{
		printf("Valid expression!\n");
		printf("Operators = %d \nIdentifiers = %d\n",optr,id);
	}
	else
		printf("Invalid");
	return 0;
}

int yywrap()
{
	return 1;
}
