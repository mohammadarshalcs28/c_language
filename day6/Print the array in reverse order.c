/*
Print the array in reverse order.
*/
#include<stdio.h>

int main(){
    int arr[10];
    int temp;
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("enter the 10 no.\n");
    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array in reverse.\n");
    for(int i =9;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}