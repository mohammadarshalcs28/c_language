/*
Create a function to calculate the factorial of a number.
*/
#include<stdio.h>
int factorial(int a){
    if (a==0 || a==1){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    printf("%d",factorial(10));
    return 0;
}