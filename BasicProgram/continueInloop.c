#include <stdio.h>
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0) // if value of i is even then continue
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}