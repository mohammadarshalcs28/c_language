/*
Find the sum of an array using pointers.
*/
#include<stdio.h>

int main(){
    int sum =0;
    int arr[5]={2,4,6,7,9};
    int* ptr=arr;
    for(int i=0 ;i<5;i++){
        sum+=ptr[i];
    }
    printf("the sum of the array: %d",sum);
    return 0;
}