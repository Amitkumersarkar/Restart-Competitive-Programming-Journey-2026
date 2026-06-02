#include <stdio.h>
int main()
{
    char s1, s2, t1, t2;

    scanf(" %c%c", &s1, &s2);
    scanf(" %c%c", &t1, &t2);

    int a = s1 - 'A';
    int b = s2 - 'A';
    int c = t1 - 'A';
    int d = t2 - 'A';
    int dist = a - b;
    if (dist < 0)
        dist = -dist;
    if (dist > 5 - dist)
        dist = 5 - dist;
    int dt = c - d;
    if (dt < 0)
        dt = -dt;
    if (dt > 5 - dt)
        dt = 5 - dt;
    if (dist == dt)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}