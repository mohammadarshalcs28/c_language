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
        printf("Result = %.2f", a);
        break;
    case 2:
        a = first_number - second_number;
        printf("Result = %.2f", a);
        break;
    case 3:
        if (second_number != 0)
        {
            a = first_number / second_number;
            printf("Result = %.2f", a);
        }
        else
        {
            printf("Division by zero is not possible");
        }
        break;
    case 4:
        a = first_number * second_number;
        printf("Result = %Result = .2f", a);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}