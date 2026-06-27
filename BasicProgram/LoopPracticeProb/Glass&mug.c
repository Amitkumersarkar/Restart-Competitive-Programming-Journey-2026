#include <stdio.h>
int main()
{
    int k, cg, cm;
    scanf("%d %d %d", &k, &cg, &cm);
    int g = 0, m = 0;
    for (int i = 1; i <= k; i++)
    {
        if (g == cg)
        {
            g = 0;
        }
        else if (m == 0)
        {
            m = cm;
        }
        else
        {
            int empty = cg - g;
            if (m >= empty)
            {
                g += empty;
                m -= empty;
            }
            else
            {
                g += m;
                m = 0;
            }
        }
    }
    printf("%d %d\n", g, m);
    return 0;
}