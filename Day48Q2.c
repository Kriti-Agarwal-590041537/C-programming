#include <stdio.h>

int main()
{
    char str[200], temp;
    int i = 0, start = 0, end;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while(start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if(str[i] == '\0')
                break;

            start = i + 1;
        }

        i++;
    }

    printf("Modified sentence: %s", str);

    return 0;
}