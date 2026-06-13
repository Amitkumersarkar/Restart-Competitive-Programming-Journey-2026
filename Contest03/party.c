#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        if (n < x || n == x)
        {
            printf("YES\n");
        }
        else

        {
            printf("NO\n");
        }
    }
    return 0;
}