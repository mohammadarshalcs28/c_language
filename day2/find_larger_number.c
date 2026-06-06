#include <stdio.h>

int main()
{
    int first_number;
    int second_number;
    int third_number;
    printf("enter the first , second and third number\n");
    scanf("%d %d %d", &first_number, &second_number, &third_number);
    if (first_number < second_number && third_number < second_number)
    {
        printf("the greatest number is %d", second_number);
    }
    else if (second_number < first_number && third_number < first_number)
    {
        printf("the greatest number is %d", first_number);
    }
    else
    {
        printf("the greatest number is %d", third_number);
    }
    return 0;
}