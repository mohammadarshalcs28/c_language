#include <stdio.h>

int main()
{
    int i;
    int a;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}