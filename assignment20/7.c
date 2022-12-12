#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    int id;
    int salary;
};
int main(){
    struct employee E[20];
    char arr[20];
    int count=1;
    for(int i=0;i<20;i++){
        printf("Enter %d Employee details :\n",count);
        printf("Name:");
        scanf("%s",&arr);
        strcpy(E[i].name,arr);
        printf("ID:");
        scanf("%d",&E[i].id);
        printf("Salary:");
        scanf("%d",&E[i].salary);
        count++;
    }

    printf("Deatils of the Employee:\n");
    count=1;
    for(int i=0;i<20;i++){
        printf("Details of %d Employee:\n",count);
        printf("Name=%s\n",E[i].name);
        printf("ID=%d\n",E[i].id);
        printf("Salary=%d\n",E[i].salary);
        count++;
    }
    return 0;
}