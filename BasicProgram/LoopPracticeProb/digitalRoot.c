#include <stdio.h>
int main()
{
    int x, sum = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        int last = x % 10;
        sum += last;
        x /= 10;
    }
    printf("%d\n", sum);
    return 0;
}