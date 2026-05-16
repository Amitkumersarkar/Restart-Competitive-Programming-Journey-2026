// basic variable declaration and initialization
#include <stdio.h>
int main()
{
    int num1 = 20;
    int num2 = 30;
    float num3 = 2.5;
    double num4 = 2.55;
    char name = 'a';

    int sum = num1 + num2;
    printf("%d \n", sum);
    printf("%.1f\n", num3);
    printf("%lf\n", num4);
    printf("%c", name);
    return 0;
}