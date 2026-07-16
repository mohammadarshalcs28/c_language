/*
Count:
Even numbers
Odd numbers
*/
#include<stdio.h>

int main(){
    int odd = 0;
    int even =0;
    int arr[10];
    int i;
    printf("enter the  no.\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("the count of odd: %d\n",odd);
    printf("the count of even: %d\n",even);

    return 0;
}