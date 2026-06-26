#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x != 0)
    {
        int lastDigit = x % 10;
        printf("%d\n", lastDigit);
        x /= 10;
    }

    return 0;
}