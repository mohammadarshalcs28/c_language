/*
Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/
#include<stdio.h>
typedef struct vector{
    int i;
    int j;
}vec;
void sumvector(vec v,vec k){
    vec sum= {v.i+k.i,v.j+k.j};
    printf("the sum of vector is -> %di + %dj",sum.i,sum.j);
}
int main(){
    vec v1 ={1,3};
    vec v2 ={4,6};
    sumvector(v1,v2);
    return 0;
}