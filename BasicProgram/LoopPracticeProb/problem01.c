#include <stdio.h>
int main()
{
    int cs = 1;
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
            break;
        printf("Case %d: %d\n", cs, x);
        cs++;
    }

    return 0;
}