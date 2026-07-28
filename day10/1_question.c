/*
Create a structure named Book having:
Book ID
Book Name
Price
Store details of 5 books.
Display only those books whose price is greater than 500.
*/
#include<stdio.h>
typedef struct liberary{
    int book_id;
    char book_name[50];
    int price;
}lib;
void display(lib arr[]){
    for(int i=0;i<5;i++){
        if(arr[i].price>500){
            printf("%s\n",arr[i].book_name);
        }
    }
}
int main(){
    lib arr[5];
    for(int i=0;i<5;i++){
        printf("enter the details of %d book: ",i+1);
        scanf("%d",&arr[i].book_id);
        scanf("%49s",arr[i].book_name);
        scanf("%d",&arr[i].price);
    }
    display(arr);
    return 0;
}