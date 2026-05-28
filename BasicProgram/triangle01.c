#include <stdio.h>
int main()
{
    float b, h, a;
    printf("enter the base value : ");
    scanf("%f", &b);
    printf("enter the height value : ");
    scanf("%f", &h);
    a = 0.5 * b * h;
    printf("The area : %.1f\n", a);
    return 0;
}