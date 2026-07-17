/*
Find the largest element.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{4,65,76,},{74,85,94},{85,91,9}};
    int a=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a<arr[i][j]){
                a=arr[i][j];
            }
        }
    }
    printf("largest no is : %d",a);
    return 0;
}