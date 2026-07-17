/*
Input and print a 3×3 matrix.
*/
#include<stdio.h>

int main(){
    int arr[3][3];
    printf("enter the no. you want to insert:\n");
    for(int i =0; i<3;i++){
        for (int j =0 ; j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("print the array.\n");
    for(int i =0; i<3;i++){
        for (int j =0 ; j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}