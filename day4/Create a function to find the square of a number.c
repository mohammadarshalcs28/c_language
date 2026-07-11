/*
Create a function to find the square of a number.
*/
#include<stdio.h>
#include<math.h>
float square(int a){
    return pow(a,2);
}
int main(){
    int b=90;
    printf("%f",square(b));
    return 0;
}