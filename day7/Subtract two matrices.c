/*
Subtract two matrices.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{48,65,76},
                    {74,85,94},
                    {45,91,9}};
    int arr1[3][3]={{18,62,26},
                    {84,80,14},
                    {47,9,90}};
    printf("the subtract two matrix:\n");
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            int sub=arr[i][j]-arr1[i][j];
            printf("%d\t",sub);
        }
        printf("\n");
    }
    return 0;
}