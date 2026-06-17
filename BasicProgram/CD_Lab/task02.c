#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char sourceCode[] = "int count = 10; float total_sum = 0.0; int student2 = 5;";
    int i = 0;
    int length = strlen(sourceCode);

    printf("--- Task 02: Original Code ---\n%s\n\n", sourceCode);
    printf("--- Identified Variables ---\n");

    while (i < length)
    {
        if (isspace(sourceCode[i]))
        {
            i++;
            continue;
        }

        if (isalpha(sourceCode[i]) || sourceCode[i] == '_')
        {
            char varBuffer[50];
            int k = 0;

            while (i < length && (isalnum(sourceCode[i]) || sourceCode[i] == '_'))
            {
                varBuffer[k++] = sourceCode[i++];
            }
            varBuffer[k] = '\0';

            if (strcmp(varBuffer, "int") != 0 && strcmp(varBuffer, "float") != 0 && strcmp(varBuffer, "char") != 0)
            {
                printf("Token: VARIABLE/IDENTIFIER | Value: %s\n", varBuffer);
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}