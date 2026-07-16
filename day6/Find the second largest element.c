/*
Find the second largest element.
*/
#include <stdio.h>

int main()
{
    int arr[] = {43, 27, 84, 95, 85, 83, 84};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = 1 + i; j < length; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("the second largest no.%d", arr[1]);
    return 0;
}