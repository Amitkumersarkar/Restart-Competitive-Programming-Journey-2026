#include <stdio.h>
int main()
{
    int x, sum = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        printf("Current = %d\n\n", x);
        int last = x % 10;
        printf("Extract = %d\n", last);
        x /= 10;
        printf("%d\n", x);
    }

    return 0;
}