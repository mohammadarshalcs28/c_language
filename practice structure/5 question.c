/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/
#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} Complex;

void display(Complex c)
{
    printf("%d + %di\n", c.real, c.imaginary);
}

int main()
{
    Complex num[5];

    printf("Enter 5 complex numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nComplex Number %d\n", i + 1);

        printf("Real Part: ");
        scanf("%d", &num[i].real);

        printf("Imaginary Part: ");
        scanf("%d", &num[i].imaginary);
    }

    printf("\nComplex Numbers are:\n");

    for(int i = 0; i < 5; i++)
    {
        display(num[i]);
    }

    return 0;
}