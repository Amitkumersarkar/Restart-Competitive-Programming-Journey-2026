#include <stdio.h>
int main()
{
    int k, g, m;
    scanf("%d %d %d", &k, &g, &m);
    int glass = 0, mug = 0;
    for (int i = 1; i <= k; i++)
    {

        if (glass == g)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = m;
        }
        else
        {
            int trans;
            if (g - glass < mug)
                trans = g - glass;
            else
                trans = mug;
            glass += trans;
            mug -= trans;
        }
    }
    printf("%d %d\n", glass, mug);
    return 0;
}