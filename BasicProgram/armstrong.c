#include <stdio.h>
int main()
{
    int num, rem, temp, sum = 0;
    scanf("%d", &num);
    temp = num;
    sum = sum * rem * rem;
    while (temp != 0)
    {
        rem = num;
        sum = sum * rem * rem * rem;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not a armstrong\n");
    }
    return 0;
}