/*
Write a program to change the value of a variable to ten times of its current
value.
*/
#include<stdio.h>
void times(int* k){
    *k = *k * 10;
    printf("the new value of a variable: %d\n",*k);
}
int main(){
    int a=99;
    int* k=&a;
    times(k);
    return 0;
}