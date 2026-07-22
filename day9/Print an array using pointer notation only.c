/*
Print an array using pointer notation only.
*/
#include<stdio.h>

int main(){
    int arr[5]={1,4,6,2,9};
    int* ptr =arr;
    printf("print array using pointer:\n");
    for (int i=0;i<5;i++){
        printf(" %d\n",ptr[i]);
    }
    return 0;
}