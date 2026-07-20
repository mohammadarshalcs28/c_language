/*
Reverse a string.
*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char temp;
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("reverse the string\n");
    for(int i=strlen(str)-1 ; i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}