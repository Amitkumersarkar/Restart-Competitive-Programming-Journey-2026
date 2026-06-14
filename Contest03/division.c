#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int r;
        scanf("%d", &r);
        if (r <= 1399)
        {
            printf("Division 4\n");
        }
        else if (r <= 1599)
        {
            printf("Division 3\n");
        }
        else if (r <= 1899)
        {
            printf("Division 2\n");
        }
        else
        {
            printf("Division 1\n");
        }
    }
    return 0;
}