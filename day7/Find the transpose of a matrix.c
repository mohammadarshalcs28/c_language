/*
Find the transpose of a matrix.
*/
/*
Find the transpose of a matrix.
*/
#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {48,65,76},
        {74,85,94},
        {45,91,9}
    };

    printf("Original Matrix:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}