#include <stdio.h>
int main()
{
    int x = 10;

    printf("%d\n", x++); // x=10 post
    printf("%d\n", x);   // x=11 post
    printf("%d\n", ++x); // x=12 pre
    printf("%d\n", x);   // x=12
    printf("%d\n", x--); // x=12
    printf("%d\n", --x); // x=10
    return 0;
}