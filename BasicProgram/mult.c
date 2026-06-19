#include <stdio.h>
int main()
{
    while (1) // 1 means condition are true and loops continue
    {
        int t;
        printf("Enter any number : ");
        scanf("%d", &t);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", t, i, t * i);
        }
    }

    return 0;
}