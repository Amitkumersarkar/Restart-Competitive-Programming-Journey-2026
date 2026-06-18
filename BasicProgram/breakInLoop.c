#include <stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        printf("%d\n", i);
        if (i == 4)
            break;
        // continue;
    }
    return 0;
}