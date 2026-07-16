/*
Search for a given number in the array.
*/
#include<stdio.h>

int main(){
    int arr[]={17,34,84,84,96,95,93,24,54,96,7,6,95,84,73,28,43,46,48,49,75,84};
    int num;
    int count=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the no. you want to find:\n");
    scanf("%d",&num);
    for (int i=0;i<length;i++){
        if (arr[i]==num){
            count++;
        }
    }
    if(count>0){
        printf("Number is in the array.");
    }
    else{
        printf("Number is not in the array.");
    }
    return 0;
}