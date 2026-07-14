/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

#include<stdio.h>
int sum_of_num(int* ptr1, int* ptr2){
    int sum;
    return sum=*ptr1 + *ptr2;
}
float avg_of_num(int* ptr1, int* ptr2){
    float avg;
    return avg=(float)(*ptr1 + *ptr2)/2;
}
int main(){
    int num_1= 56;
    int num_2=93;
    int* ptr_1=& num_1;
    int* ptr_2=& num_2;
    printf("the sum of two no:%d\n",sum_of_num(ptr_1,ptr_2));
    printf("the avg of two no:%f\n",avg_of_num(ptr_1,ptr_2));
    return 0;
}