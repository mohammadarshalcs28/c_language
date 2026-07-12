/*
Create a function to check whether a number is Prime.
*/
#include<stdio.h>
int prime(int a){
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==0){
        printf("%d is a prime no.",a);
    }
    else{
        printf("%d is not a prime no.",a);
    }
}
int main(){
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    prime(a);
    return 0;
}