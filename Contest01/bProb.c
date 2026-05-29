#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int d = a / b;
    int r = a % b;
    printf("%d %d %.5lf", d, r, (double)a / b);
    return 0;
}