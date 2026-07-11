/*
Create a function to check whether a number is Even or Odd.
*/
#include<stdio.h>
void check(int a){
    if(a%2==0){
        printf("no. is even");
    }
    else{
        printf("no. is odd");
    }
}
int main(){
    int b=87;
    check(b);
    return 0;
}