#include <stdio.h>

/* copy input o output; 2nd version */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}