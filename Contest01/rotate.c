#include <stdio.h>
int main()
{
    int xyz, yzx, zxy;
    scanf("%d %d %d", &xyz, &yzx, &zxy);
    int abc = xyz;
    int bca = yzx;
    int cab = zxy;
    int sum = abc + bca + cab;
    printf("%d\n", sum);
    return 0;
}