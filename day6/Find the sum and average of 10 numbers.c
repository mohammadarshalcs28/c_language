/*
Find the sum and average of 10 numbers.
*/
#include<stdio.h>

int main(){
    int arr[10];
    int sum=0;
    float avg;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 10; i++) {
        sum+=arr[i];
    }
    avg=(float)sum/length;
    printf("the sum of array;%d\n",sum);
    printf("the average of array is:%f\n",avg);

    return 0;
}