/*
Create a function that prints the multiplication table of a number.
*/
#include<stdio.h>
int multiplication(int a){
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}
int main(){
    multiplication(786);
    return 0;
}