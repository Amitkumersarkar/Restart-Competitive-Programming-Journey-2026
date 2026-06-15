#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x;
        scanf("%d", &x);
        int com = (500 + x - 1) / x;
        printf("%d\n", com);
    }
    return 0;
}