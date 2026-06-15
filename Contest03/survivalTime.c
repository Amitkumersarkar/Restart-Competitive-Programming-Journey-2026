#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {

        int n, x, d;
        scanf("%d %d %d", &n, &x, &d);
        int pd = 5 * x;
        int st = n / pd;
        int surv = st + d;
        printf("%d\n", surv);
    }
    return 0;
}