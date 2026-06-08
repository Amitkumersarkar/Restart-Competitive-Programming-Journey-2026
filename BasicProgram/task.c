#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int cal = (x / 10) * 10;
    printf("%d\n", x - cal);
    return 0;
}