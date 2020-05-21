	/* Develop, implement and execute a program using YACC to recognize all the strings ending with b preceded 
       by n number of a's, using the grammar (a^n)b. */
%{
    #include "y.tab.h"
%}

%%
a {return A;}
b {return B;}
[\n] {return '\n';}
%%

int yywrap() 
{
    return 1;
}
