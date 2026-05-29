#include <stdio.h>
int main()
{
    int X, N;
    scanf("%d %d", &X, &N);
    int R = X - (N * 10);
    int ans = R / 20;
    printf("%d\n", ans);
}