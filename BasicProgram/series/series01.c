#include <stdio.h>
int main()
{
    int n, sum = 0;
    // printf("Enter the last number of the series : ");
    scanf("%d", &n);
    printf("1+2+3+....+ %d", n);
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    printf(" = %d\n", sum);
    return 0;
}