#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char str[])
{
    char keywords[][10] = {
        "int", "float", "char", "double", "if",
        "else", "while", "for", "return", "void"};

    int n = 10;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }

    return 0;
}

int main()
{
    FILE *fp;
    char ch, str[50];
    int i = 0;

    fp = fopen("input.c", "r");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    printf("Keywords found in the source program are:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha(ch) || ch == '_')
        {
            i = 0;
            str[i++] = ch;

            while ((ch = fgetc(fp)) != EOF &&
                   (isalnum(ch) || ch == '_'))
            {
                str[i++] = ch;
            }

            str[i] = '\0';

            if (isKeyword(str))
            {
                printf("%s\n", str);
            }
        }
    }

    fclose(fp);

    return 0;
}