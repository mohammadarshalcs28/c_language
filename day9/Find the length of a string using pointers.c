/*
Find the length of a string using pointers.
*/
#include <stdio.h>

int main()
{
    char st[100];
    int count=0;
    printf("enter the string\n");
    fgets(st, sizeof(st), stdin);
    char* ptr = st;
    while(*ptr != '\n' && *ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf(" %d\n",count);
    return 0;
}