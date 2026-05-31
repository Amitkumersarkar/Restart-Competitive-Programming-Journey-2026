#include <stdio.h>
int main()
{
    double r;
    scanf("%lf", &r);
    double pi = 3.141592653589793;
    double A = pi * r * r;
    double C = 2 * pi * r;
    printf("%lf %lf\n", A, C);
    return 0;
}