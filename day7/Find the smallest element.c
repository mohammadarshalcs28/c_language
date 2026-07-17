/*
Find the smallest element.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{46,65,36,},{74,85,94},{85,91,99}};
    int smallest=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(smallest>arr[i][j]){
                smallest=arr[i][j];
            }
        }
    }
    printf("largest no is : %d",smallest);
    return 0;
}