#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        int glass, g = 0, mug, m = 0;
        scanf("%d %d", &glass, &mug);
        if (g == glass)
        {
            g = 0;
        }
        else if (m == mug)
        {
            m = 0;
        }
        else
        {
            int empty = glass - g;
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