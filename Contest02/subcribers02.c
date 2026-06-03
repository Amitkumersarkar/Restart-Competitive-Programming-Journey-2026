#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N <= 999)
    {
        printf("%d\n", N);
    }
    else if (N <= 9999)
    {
        printf("%d\n", (N / 10) * 10);
    }
    else if (N <= 99999)
    {
        printf("%d\n", (N / 100) * 100);
    }
    else if (N <= 999999)
    {
        printf("%d\n", (N / 1000) * 1000);
    }
    else if (N <= 9999999)
    {
        printf("%d\n", (N / 10000) * 10000);
    }
    else if (N <= 99999999)
    {
        printf("%d\n", (N / 100000) * 100000);
    }
    else if (N <= 999999999)
    {
        printf("%d\n", (N / 1000000) * 1000000);
    }

    return 0;
}