#include<stdio.h>

int main(){
    int length,width,area;
    printf("Enter the length:\n");
    scanf("%d",&length);
    printf("Enter the width:\n");
    scanf("%d",&width);
    area=length*width;
    printf("the area of rectangle = %d",area);
    return 0;
}