#include <stdio.h>
int main()
{
    int n1, n2, gcd;
    scanf("%d %d", &n1, &n2);
    gcd = (n1 * n2) / gcd;
    n2 = gcd;
    printf("%d\n", n2);
    return 0;
}