#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x, n;
        scanf("%d %d", &x, &n);
        int req = (n + 99) / 100;
        if (req > x)
        {

            printf("%d\n", req - x);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}