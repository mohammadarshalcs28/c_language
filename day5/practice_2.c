/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/
#include<stdio.h>
void pass(int* ptr){
    printf("the vale of ptr %u",ptr);
}
int main(){
    int i= 53 ;
    int* j = &i;
    printf("address of i: %u \n",(void *)&i);
    pass(j);
    return 0;
}