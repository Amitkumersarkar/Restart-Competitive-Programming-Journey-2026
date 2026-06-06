/*
Relational Operator :
==,>=,<=,!=,etc

control statement 2 types :
1.Conditional statement
2.loop control statement
*/
// Conditional control statement
// if else and switch 2 types statement
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else if (num % 2 != 0)
    {
        printf("Odd\n");
    }

    return 0;
}