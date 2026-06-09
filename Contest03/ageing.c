#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int X;
        scanf("%d", &X);
        int Y = X - 10;
        printf("%d\n", Y);
    }

    return 0;
}