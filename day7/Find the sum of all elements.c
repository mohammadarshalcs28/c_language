/*
Find the sum of all elements.
*/
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3},{1, 5, 6},{8, 4, 3}};
    int sum =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of elements: %d\n",sum);
    return 0;
}