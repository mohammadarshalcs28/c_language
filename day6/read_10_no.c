/*
Read 10 numbers and print them.
*/
#include <stdio.h>

int main() {
    int arr[10];

    // Read 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the numbers
    printf("The numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}