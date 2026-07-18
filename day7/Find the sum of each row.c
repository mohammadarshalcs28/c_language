/*
Find the sum of each row.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{48,65,76},
                    {74,85,94},
                    {45,91,9}};
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++){
            sum+=arr[i][j];
        }
        printf("the sum of %d row = %d\n",i+1,sum);
    }
    return 0;
}