#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start = 0, len = 0;
    int maxLen = 0, maxStart = 0;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;

            if(str[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxLen);

    return 0;
}