// letter conversion using library functions
#include <stdio.h>
#include <ctype.h>
int main()
{
    char lower, upper;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower);
    upper = toupper(lower); // toupper method
    printf("The upperCase letter is : %c", upper);
    return 0;
}