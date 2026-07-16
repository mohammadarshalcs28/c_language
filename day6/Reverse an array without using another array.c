/*
Reverse an array without using another array.
*/
#include<stdio.h>

int main(){
    int arr[]={34,66,76,96,25,53,90};
    int temp;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<(length/2);i++){
        temp=arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }
    printf("the reverse array\n");
     for(int i =0;i<length;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}