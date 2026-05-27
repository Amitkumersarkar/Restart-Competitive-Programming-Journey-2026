#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum is : %d\n", sum);

    float avg = (float)sum / 2;
    printf("The average value is : %.1f\n", avg);
    return 0;
}