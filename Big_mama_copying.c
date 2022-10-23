// Online C compiler to run C program online
#include <stdio.h>

int main() {

int c = 0;
int c2 = ' ';

int prevc =0;

int tabs = 0, blanks = 0, lines = 0;

while ((c = getchar()) != EOF)
{
    


    /* if statements below increment up by 1 for every tab, blank
    and newline that is seen, respectively*/
    if (c=='\t')
    tabs++;
    if (c==' ')
    blanks++;
    if (c=='\n')
    lines++;
 
    /*below statements look for backspaces, \s and tabs and replaces them with \b, \\, and \t, respectively.*/
    
    if (c=='\b')
    {
    c = '\\';
    c2 = 'b';
    }

    if (c=='\\')
    {
    c = '\\';
    c2 = '\\';
    }
    
    if (c=='\t')
    {
    c= '\\';
    c2 = 't';
    }
    
    //get rid of extra spaces
    if ((prevc ==' ')&&(c==' '))
    {}
    else
    {
    /*print out current count of tabs, blanks and new lines, as well
    as the current character we are on */
    putchar(c);
    putchar(c2);
    printf("\t# of inputted tabs: %d\t# of inputted blanks: %d\t#of inputted lines: %d\n", tabs,blanks, lines);
    }
   
   c2 = ' ';
   prevc = c;
}
}
