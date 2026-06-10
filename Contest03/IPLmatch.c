#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int av = (n - m);
        if (n > m)
        {

            printf("%d\n", av);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}