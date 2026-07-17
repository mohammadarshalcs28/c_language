/*
Print the secondary diagonal.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{48,65,76},
                    {74,85,94},
                    {45,91,9}};
    printf("the secondry diagonal:\n");
    for(int i=0;i<3;i++){
        printf("%d ",arr[i][2-i]);
    }
    return 0;
}