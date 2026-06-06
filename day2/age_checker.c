#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    age<18?printf("you are not eligible for vote."):printf("you are eligible for vote.");
    return 0;
}