#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if (X != 404)
    {
        printf("FOUND\n");
    }
    else
    {
        printf("NOT FOUND\n");
    }
    return 0;
}