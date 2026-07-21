/*
Print the value using a pointer.
*/
#include<stdio.h>

int main(){
    int num=43 ;
    int* ptr=&num;
    printf("print the value using the pointer: %d",*ptr);
    return 0;
}