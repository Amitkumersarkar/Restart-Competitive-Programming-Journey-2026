#include <stdio.h>
int main()
{
    int num1, num2, num3, avg;
    printf("Enter the number : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;
    printf("The sum : %d\n", sum);
    avg = sum / 3;
    printf("The avg value : %d", avg);
    return 0;
}