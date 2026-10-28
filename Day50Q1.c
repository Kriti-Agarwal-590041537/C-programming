#include <stdio.h>

int main()
{
    char date[11];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%10s", date);

    printf("Formatted date: %.2s-Apr-%.4s", date, date + 6);

    return 0;
}