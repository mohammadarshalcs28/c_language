/*
Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/
#include<stdio.h>

int main(){
    int a = 52;
    int* j = &a;
    printf("the address of the variable: %p \n",j);
    printf("the value of variable: %d \n",*j);
    return 0;
}