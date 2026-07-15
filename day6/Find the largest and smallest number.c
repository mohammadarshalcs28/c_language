/*
Find the largest and smallest number.
*/
#include<stdio.h>

int main(){
    int arr[10];
    printf("enter the 10 no.\n");
    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];

    // Find largest and smallest
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}