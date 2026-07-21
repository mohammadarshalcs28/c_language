/*
Modify a variable through a pointer.
*/
#include<stdio.h>

int main(){
    int a =54;
    int* ptr =&a;
    *ptr = *ptr+5;
    printf("the no . is :%d",a);
    return 0;
}