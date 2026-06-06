#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("Large Num1 = %d\n", num1);
    }
    else if (num1 < num2)
    {
        printf("Large Num2 = %d\n", num2);
    }
    else
    {
        printf("Both Are Equal\n");
    }

    return 0;
}