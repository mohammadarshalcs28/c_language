/*
Try problem 3 using call by value and verify that it does not change the value of
the said variable.
*/
#include<stdio.h>
void times(int k){
    k = k * 10;
    printf("the new value of a variable: %d\n",k);
}
int main(){
    int a=99;
    times(a);
    printf("the org value of a:%d\n",a);
    return 0;
}