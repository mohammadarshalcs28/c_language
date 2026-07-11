#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int y = 1; y <= i; y++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}