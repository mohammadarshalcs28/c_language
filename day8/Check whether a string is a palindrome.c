/*
Check whether a string is a palindrome.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char str1[100];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);

    for (int i = 0; i < len ;i++)
    {
        str1[i] = str[len - 1 - i];
    }
    str1[len] = '\0';
    if(strcmp(str,str1)==0){
        printf("string is pallendrome.\n");
    }
    else {
        printf("string is not pallendrome.\n");
    }

    return 0;
}