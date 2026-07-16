#include <stdio.h>

int main() {
    int arr[20] = {88,43,65,86,97,90,34,54,46,37,58,56};
    int length = 12;
    int num, pos;

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the position (0 to %d): ", length);
    scanf("%d", &pos);

    if (pos < 0 || pos > length) {
        printf("Invalid position.\n");
        return 0;
    }

    // Shift elements to the right
    for (int i = length; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = num;
    length++;

    printf("Array after insertion:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}