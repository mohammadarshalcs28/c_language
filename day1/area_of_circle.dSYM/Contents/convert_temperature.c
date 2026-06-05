#include<stdio.h>

int main(){
    float celsius, Fahrenheit;
    printf("enter the celsius:");
    scanf("%f",&celsius);
    Fahrenheit=(celsius*9/5)+32;
    printf("Fahrenheit = %f",Fahrenheit);
    return 0;
}