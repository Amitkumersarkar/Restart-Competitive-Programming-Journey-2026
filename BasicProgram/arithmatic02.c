// write a program that calculate the area of a triangle
#include <stdio.h>
int main()
{
    float base, height;
    printf("Enter base : ");
    scanf("%f", &base);
    printf("Enter height : ");
    scanf("%f", &height);
    float area = 0.5 * base * height;
    printf("The area is : %.1f", area);
}