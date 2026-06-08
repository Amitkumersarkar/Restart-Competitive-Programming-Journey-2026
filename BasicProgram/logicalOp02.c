// write a program that read 3 numbers and display maximum
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("Large = %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("Large = %d\n", b);
    }
    else if (c > a && c > b)
    {
        printf("Large = %d\n", c);
    }
    else
    {
        printf("equal\n");
    }
    return 0;
}