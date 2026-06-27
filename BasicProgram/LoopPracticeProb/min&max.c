#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    sum = 0;
    int mn = 10000000, mx = -10000000;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        sum += x;
        if (x < mn)
        {
            mn = x;
        }
        if (x > mx)
        {
            mx = x;
        }
    }
    printf("%d %d %d\n", mn, mx, sum);

    return 0;
}