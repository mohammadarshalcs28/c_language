#include<stdio.h>

int main(){
    int num,reminder,rev=0,ori;
    printf("enter the number\n");
    scanf("%d",&num);
    ori=num;
    while(num!=0){
        reminder=num%10;
        rev=rev*10+reminder;
        num=num/10;
    }
    if(ori==rev){
        printf("number is pallendome");
    }
    else{
        printf("number is not pallendrome");
    }
    return 0;
}