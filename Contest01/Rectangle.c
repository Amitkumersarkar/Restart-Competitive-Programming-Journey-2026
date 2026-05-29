#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int p = 2 * (a + b);
    printf("%d %d\n", a * b, p);
    return 0;
}