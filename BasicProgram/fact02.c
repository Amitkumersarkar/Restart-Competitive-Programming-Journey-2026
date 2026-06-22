#include <stdio.h>
int main()
{
    int fact = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
    return 0;
}