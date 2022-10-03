#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, nl, nw, nc, state;
    
    state = IN;
    nl = nc = 0;
    nw = 1;
    
    //we will type | instead of EOF to manually end the file
    while ((c = getchar()) != '|') {
        //count new char
        ++nc;
        
        //count new line
        if (c == '\n')
        ++nl;
        
        //if a word ends, change the state and place a new line
        if ((c==' ')||(c =='\n')||c=='\t')
        {
        state = OUT;
        putchar('\n');
        }
        //count a new word
        else if (state == OUT) {
            state = IN;
            ++nw;
            putchar(c);
        }
        else
        putchar(c);
    }
    printf("\n# of new lines: %d # of words: %d # of total chars: %d\n", nl, nw, nc);
}
