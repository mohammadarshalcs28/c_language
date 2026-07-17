/*
Print only the main diagonal.
*/
#include<stdio.h>

int main(){
    int arr[3][3]={{46,65,36,},{74,85,94},{85,91,99}};
    printf("the main diagonal is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
            printf("%d\t",arr[i][j]);
            }
        }
    }
    return 0;
}