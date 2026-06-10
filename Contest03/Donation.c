#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int donate = y - x;
        if (y > x)
        {
            printf("%d\n", donate);
        }
        else
        {
            printf("8\n");
        }
    }
    return 0;
}