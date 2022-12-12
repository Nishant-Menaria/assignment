#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int id;
    int salary;
};

int main(){
    struct employee E1,E2,E3;
    char arr[20];
    printf("Enter first employee Name:");
    scanf("%s",&arr);
    strcpy(E1.name,arr);
    printf("Enter Id:");
    scanf("%d",&E1.id);
    printf("Enter employee salary:");
    scanf("%d",&E1.salary);

    printf("Enter secound employee Name:");
    scanf("%s",&arr);
    strcpy(E2.name,arr);
    printf("Enter Id:");
    scanf("%d",&E2.id);
    printf("Enter employee salary:");
    scanf("%d",&E2.salary);

    printf("Enter Third employee Name:");
    scanf("%s",&arr);
    strcpy(E3.name,arr);
    printf("Enter Id:");
    scanf("%d",&E3.id);
    printf("Enter employee salary:");
    scanf("%d",&E3.salary);

    printf("Details of first emloyee:\n");
    printf("%s\n",E1.name);
    printf("ID=%d\n",E1.id);
    printf("Salary=%d\n",E1.salary);
    
    printf("Details of secound emloyee:\n");
    printf("%s\n",E2.name);
    printf("ID=%d\n",E2.id);
    printf("Salary=%d\n",E2.salary);

    printf("Details of Third emloyee:\n");
    printf("%s\n",E3.name);
    printf("ID=%d\n",E3.id);
    printf("Salary=%d\n",E3.salary);

    return 0;
}