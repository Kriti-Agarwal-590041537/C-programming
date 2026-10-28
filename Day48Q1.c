#include <stdio.h>

int main()
{
    char a[100], b[100], temp[200];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    while(a[len1] != '\0')
        len1++;

    while(b[len2] != '\0')
        len2++;

    if(len1 == len2)
    {
        for(i = 0; i < len1; i++)
            temp[i] = a[i];

        for(i = 0; i < len1; i++)
            temp[len1 + i] = a[i];

        temp[2 * len1] = '\0';

        for(i = 0; i < len1; i++)
        {
            for(j = 0; j < len1; j++)
            {
                if(temp[i + j] != b[j])
                    break;
            }

            if(j == len1)
            {
                found = 1;
                break;
            }
        }
    }

    if(found == 1)
        printf("Strings are rotations");
    else
        printf("Strings are not rotations");

    return 0;
}