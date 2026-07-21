/*
Swap two numbers using pointers.
*/
#include<stdio.h>

int main(){
    int a=5;
    int b=9;
    int* ptr=&a;
    int* ptr1=&b;
    int temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    printf("print a and b ,%d,%d",a,b);

    return 0;
}