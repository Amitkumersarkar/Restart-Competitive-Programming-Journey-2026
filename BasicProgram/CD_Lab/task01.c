#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isWhitespace(char ch)
{
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
}

int main()
{
    char sourceCode[] = "int base = 50 ; \n\t float rate = 12.75 ;";
    int i = 0;
    int length = strlen(sourceCode);

    printf("--- Task 01: Original Code ---\n%s\n\n", sourceCode);
    printf("--- Identified Number Tokens ---\n");

    while (i < length)
    {
        if (isWhitespace(sourceCode[i]))
        {
            i++;
            continue;
        }

        if (isdigit(sourceCode[i]))
        {
            char numBuffer[50];
            int k = 0;
            bool isFloat = false;

            while (i < length && (isdigit(sourceCode[i]) || sourceCode[i] == '.'))
            {
                if (sourceCode[i] == '.')
                {
                    if (isFloat)
                        break;
                    isFloat = true;
                }
                numBuffer[k++] = sourceCode[i++];
            }
            numBuffer[k] = '\0';

            if (isFloat)
            {
                printf("Token: NUMBER (Float)   | Value: %s\n", numBuffer);
            }
            else
            {
                printf("Token: NUMBER (Integer) | Value: %s\n", numBuffer);
            }
        }
        else
        {
            if (isalpha(sourceCode[i]))
            {
                while (i < length && isalnum(sourceCode[i]))
                    i++;
            }
            else
            {
                i++;
            }
        }
    }
    return 0;
}