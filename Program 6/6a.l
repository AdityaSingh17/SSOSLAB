	/* Using LEX, eliminate comment lines in a C program and copy the resulting program in a separate file, also
	   count the number of comments. */
%{
	#include<stdio.h>
	int c=0;
%}

%%
\/\/[a-zA-Z0-9 \t]*	{ c++;
			  		  printf(" ");
					}
\/\*[a-zA-Z0-9 \n\t]*\*\/	c++;
%%

int main(int argc,char* argv[])
{
	yyin=fopen(argv[1],"r");
	yyout=fopen(argv[2],"w");
	yylex();
	printf("Comments = %d\n",c);
	return 0;
}

int yywrap()
{
	return 1;
}
	/* Make a sample.c file to use with this program
	   use the ./a.out function as
	   ./a.out sample.c output.c 
	   The comment free code is in output.c
	*/
	   
