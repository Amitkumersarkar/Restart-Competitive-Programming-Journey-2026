#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (Y > X)
    {
        if (Y - X <= 2)
            printf("Yes\n");
        else

            printf("No\n");
    }
    else
    {
        if (X - Y <= 3)
            printf("Yes\n");
        else

            printf("No\n");
    }
    return 0;
}