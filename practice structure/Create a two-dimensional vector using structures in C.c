/*
Create a two-dimensional vector using structures in C.
*/

#include<stdio.h>
typedef struct vector{
    int i;
    int j;
}vec;
int main(){
    vec v ={1,3};
    printf("The two vector are %di + %dj",v.i,v.j);
    return 0;
}