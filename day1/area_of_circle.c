#include<stdio.h>

int main(){
    float radious;
    printf("enter the radious of circle:");
    scanf("%f",&radious);
    float area=3.14*radious*radious;
    printf("the area of circle = %f",area);
    return 0;
}