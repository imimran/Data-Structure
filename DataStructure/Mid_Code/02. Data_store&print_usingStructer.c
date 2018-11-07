#include<stdio.h>

 struct employee{
    int id;
    char name[10];
    int salary;
 };
 int main(){
    int i,n;
    printf("Enter number of Employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    printf("\nEnter Employee's Data one by one:\n");
        for(i=0;i<n;i++){
                printf("Enter Id: ");
                scanf("%d",&emp[i].id);
                printf("Enter Name: ");
                scanf("%s",&emp[i].name);
                printf("Enter Salary: ");
                scanf("%d",&emp[i].salary);
        }
        printf("\nNow see your employee details\n");
        for(i=0;i<n;i++){
                printf("\nData of employees are: %d \n", i+1);
                printf("\nId: %d",emp[i].id);
                printf("\nName: %s",emp[i].name);
                printf("\nSalary: %d",emp[i].salary);
        }
        return 0;

 }
