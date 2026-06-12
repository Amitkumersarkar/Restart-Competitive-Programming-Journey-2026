#include <stdio.h>

int main()
{
    int num, i;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}