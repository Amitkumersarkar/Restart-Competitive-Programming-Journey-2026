// decimal to octal conversion
// format specifier %d for dec and %o for oct and hex %x
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any decimal number : ");
    scanf("%d", &num);
    printf("The octal number is : %o", num);
    return 0;
}