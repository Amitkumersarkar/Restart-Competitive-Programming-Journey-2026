#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x != 0)
    {
        printf("Current = %d\n", x);
        int lastDigit = x % 10;
        printf("Extracted = %d\n", lastDigit);
        x /= 10;
        printf("New = %d\n\n", x);
    }

    return 0;
}