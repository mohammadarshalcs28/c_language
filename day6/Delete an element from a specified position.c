/*
Delete an element from a specified position.
*/
#include<stdio.h>

int main(){
    int arr[20] = {88,43,65,86,97,90,34,54,46,37,58,56};
    int length = 12;
    int pos;
    printf("enter the position you want to delete");
    scanf("%d",&pos);
    for(int i=pos;i<length;i++){
        arr[i]=arr[i+1];
    }
    length--;
    printf("Array after deletion:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}