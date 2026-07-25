/*
Write a program to illustrate the use of arrow operator → in C.
*/
#include<stdio.h>
#include<string.h>
typedef struct student{
    int id;
    char name[20];
}stu;
int main(){
    stu s1={1,"anuj"};
    stu* ptr= &s1;
    printf("the details of the studemt Id=%d and name=%s .",ptr->id,ptr->name);
    return 0;
}