#include <stdio.h>
int main()
{
    int n1, n2, rem;
    scanf("%d %d", &n1, &n2);
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
    printf("%d\n", n2);
    return 0;
}