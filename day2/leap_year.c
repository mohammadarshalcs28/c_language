#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this is not leap year");
    }
    return 0;
}