#include <stdio.h>
int main()
{
    int i = 0;
print:
    printf("%d\t", i);
    i += 1;
    if (i <= 10)
        goto print;
    return 0;
}