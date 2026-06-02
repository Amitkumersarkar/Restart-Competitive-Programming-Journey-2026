#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int onefulPair = a + b + (a * b);
    if (onefulPair == 111)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}