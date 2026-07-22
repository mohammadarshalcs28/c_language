/*
Reverse an array using pointers.
*/
#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int* ptr =arr;
    printf("print reverse array using pointer:\n");
    for (int i=4;i>=0;i--){
        printf(" %d\n",ptr[i]);
    }
    return 0;
}