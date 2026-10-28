#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, start = 0, lastSpace = -1;

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    while(name[i] != '\0')
    {
        if(name[i] == ' ')
            lastSpace = i;
        i++;
    }

    printf("Formatted name: ");

    for(i = 0; i < lastSpace; i++)
    {
        if(i == 0 || name[i - 1] == ' ')
        {
            if(name[i] != ' ')
                printf("%c. ", name[i]);
        }
    }

    start = lastSpace + 1;

    if(lastSpace == -1)
        start = 0;

    for(i = start; name[i] != '\0'; i++)
        printf("%c", name[i]);

    return 0;
}