#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int f = x / y;
        if (f >= 20)
        {
            f = 20;
        }
        printf("%d\n", f);
    }
    return 0;
}