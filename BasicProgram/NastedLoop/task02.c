#include <stdio.h>
int main()
{
    int n, i, j, spaces;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        spaces = n - i;
        while (spaces--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}