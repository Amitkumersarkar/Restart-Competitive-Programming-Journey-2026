#include <stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower);
    // printf("The uppercase letter : %c", lower - 32);
    int m = lower - 32;
    printf("The uppercase letter : %c", m);
    return 0;
}