/*
Create a function to add two numbers.
Input numbers in main() and pass them to the function.
*/
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int result=add(6,9);
    printf("%d",result);
    return 0;
}