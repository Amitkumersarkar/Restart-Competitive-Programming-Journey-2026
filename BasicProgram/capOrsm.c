#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Small Letter\n");
    }
    else
    {
        printf("Not a letter\n");
    }

    return 0;
}