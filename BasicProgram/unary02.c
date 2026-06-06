#include <stdio.h>
int main()
{
    int x = 10;
    // int y = x--;
    int y = --x;
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}