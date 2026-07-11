/*
Create a function to find the largest of two numbers.
*/
#include<stdio.h>
void larger(int a,int b){
    if(a<b){
        printf("the lagrgest no is %d",b);
    }
    else{
        printf("the largest no is %d",a);
    }
}
int main(){
    larger(78,73);
    return 0;
}