#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int col = n - x;
        {
            printf("%d\n", col);
        }
    }
    return 0;
}