/*
Convert a string to lowercase.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char st[100];
    printf("enter the string:");
    fgets(st,sizeof(st),stdin);
    for(int i =0;i<strlen(st);i++){
       st[i] = tolower(st[i]);
    }
    printf("the string after lower all character:\n");
    printf("%s",st);
    return 0;
}