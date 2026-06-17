#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

const char *keywords[] = {"int", "float", "char", "if", "else", "while", "for", "return", "void"};
int numKeywords = 9;

bool checkKeyword(char buffer[])
{
    for (int j = 0; j < numKeywords; j++)
    {
        if (strcmp(keywords[j], buffer) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char sourceCode[] = "if ( x > 0 ) return void ; else int y = 20 ;";
    int i = 0;
    int length = strlen(sourceCode);

    printf("--- Task 03: Original Code ---\n%s\n\n", sourceCode);
    printf("--- Identified Keywords ---\n");

    while (i < length)
    {
        if (isalpha(sourceCode[i]))
        {
            char buffer[50];
            int k = 0;

            while (i < length && isalnum(sourceCode[i]))
            {
                buffer[k++] = sourceCode[i++];
            }
            buffer[k] = '\0';

            if (checkKeyword(buffer))
            {
                printf("Token: RESERVED KEYWORD    | Value: %s\n", buffer);
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}