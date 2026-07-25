/*
Write a program with a structure representing a complex number.
*/
#include<stdio.h>
typedef struct complex{
    int real;
    int image;
} complexno;
int main(){
    complexno num1={3,7};
    complexno num2={8,6};
    printf("the complex no is %d + %di .\n",num1.real,num1.image);
    printf("the complex no is %d + %di .\n",num2.real,num2.image);
    return 0;
}