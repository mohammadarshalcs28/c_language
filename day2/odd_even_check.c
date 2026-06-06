#include <stdio.h>

int main()
{
    int a;
    printf("enter the no.\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the enter no. is even.\n");
    }
    else
    {
        printf("the enter no. is odd.");
    }
    return 0;
}