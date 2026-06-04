#include <stdio.h>
int main()
{
    int W, H;
    scanf("%d %d", &W, &H);
    if (W >= 60 && H <= 130)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}