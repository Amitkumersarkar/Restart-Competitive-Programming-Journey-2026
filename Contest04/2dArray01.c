#include <stdio.h>
int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[4][4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                printf("%d", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}