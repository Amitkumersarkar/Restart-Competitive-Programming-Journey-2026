#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int s = x % 10;
        printf("%d\n", s);
        s = x / 10;
    }
    return 0;
}