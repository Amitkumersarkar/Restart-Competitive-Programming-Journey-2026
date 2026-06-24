#include <stdio.h>
int main()
{
    int num, sum = 0, r, temp;
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    printf("The reverse number = %d\n", sum);

    return 0;
}