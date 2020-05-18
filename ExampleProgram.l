	/* Example LEX program to count the number of vowels and consonants in a given sentence. */
%{
	#include<stdio.h>
	int vowels=0,consonants=0;
%}

%%
[aeiouAEIOU] vowels++;
[a-zA-Z] consonants++;
[ ] ;
%%

main()
{
	printf("Enter a word\n");
	yylex();
	printf("The number of vowels = %d\nThe number of consonants = %d\n",vowels,consonants);
}

int yywrap()
{
	return 1;
}
