#include <stdio.h>
int main()
{
    int b, h, a;
    printf("enter the value : ");
    scanf("%d %d", &b, &h);
    a = (float)0.5 * b * h;
    printf("The area : %d", a);
    return 0;
}