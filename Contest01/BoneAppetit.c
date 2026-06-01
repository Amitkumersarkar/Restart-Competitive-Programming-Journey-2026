#include <stdio.h>
int main()
{
    int N, M, X, Y;
    scanf("%d %d %d %d", &N, &M, &X, &Y);
    int get = (N * X) + (M * Y);
    printf("%d\n", get);
    return 0;
}