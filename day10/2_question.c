/*
Create a structure named Employee having:
Employee ID
Employee Name
Salary
Find the employee with the highest salary.
*/
#include<stdio.h>
typedef struct employee{
    int employee_id;
    char employee_name[50];
    float salary;
}emp;
int main(){
    emp arr[5];
    for(int i=0;i<5;i++){
        printf("enter the details of %d employee: ",i+1);
        scanf("%d",&arr[i].employee_id);
        scanf("%49s",arr[i].employee_name);
        scanf("%f",&arr[i].salary);
    }
 float max = arr[0].salary;
    int index = 0;

    for(int i = 1; i < 5; i++)
    {
        if(arr[i].salary > max)
        {
            max = arr[i].salary;
            index = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", arr[index].employee_id);
    printf("Name: %s\n", arr[index].employee_name);
    printf("Salary: %.2f\n", arr[index].salary);

    return 0;
}