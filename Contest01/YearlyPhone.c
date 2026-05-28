#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    printf("k%02d", X % 100);
    return 0;
}