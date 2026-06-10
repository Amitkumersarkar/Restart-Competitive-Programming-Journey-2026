#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char str[])
{
    char keywords[][10] = {"int", "float", "char", "double", "if", "else", "while", "for", "return", "void"};

    for (int i = 0; i < 10; i++)
        if (strcmp(str, keywords[i]) == 0)
            return 1;

    return 0;
}

int main()
{
    char str[100];
    int i = 0;

    printf("Enter code:\n");
    while (scanf("%s", str) != EOF)
    {
        if (!isKeyword(str) && isalpha(str[0]))
            printf("%s\n", str);
    }

    return 0;
}