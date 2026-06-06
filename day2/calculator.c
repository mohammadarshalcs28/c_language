#include <stdio.h>

int main()
{
    float first_number;
    float second_number;
    int opr;
    float a;
    printf("Enter the first and second number.\n");
    scanf("%f", &first_number);
    printf("Enter the second number.\n");
    scanf("%f", &second_number);
    printf("enter what operation you do.\n 1.addition\n2.substraction\n3.division\n4.multiplication\n");
    scanf("%d", &opr);
    switch (opr)
    {
    case 1:
        a = first_number + second_number;
        printf("%f", a);
        break;
    case 2:
        a = first_number - second_number;
        printf("%f", a);
        break;
    case 3:
        a = first_number / second_number;
        printf("%f", a);
        break;
    case 4:
        a = first_number * second_number;
        printf("%f", a);
        break;
    }

    return 0;
}