// area =sqrt(s*(s-a)*(s-b)*(s-c))
// s=(a+b+c)/2 Semi parameter formula

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area; // here s is a semi parameter
    printf("Enter the value :");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle : %.2lf\n", area);
    return 0;
}