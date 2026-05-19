#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter your name : ");
    // scanf("%s", &name); // use %s format specifier for multiple char as stirng
    gets(name);
    // printf("Hello! %s\n", name);
    printf("Hello ! ");
    puts(name);
    return 0;
}