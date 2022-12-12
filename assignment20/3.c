#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll;
    unsigned int phone;
    int id;
};
int main(){
    struct student s1,s2,s3,s4;
    char arr[20];
    printf("Enter details of first student :\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s1.name,arr);
    printf("ID:");
    scanf("%d",&s1.id);
    printf("Roll Number :");
    scanf("%d",&s1.roll);
    printf("Phone Number :");
    scanf("%d",&s1.phone);

    printf("Enter details of secound student :\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s2.name,arr);
    printf("ID:");
    scanf("%d",&s2.id);
    printf("Roll Number :");
    scanf("%d",&s2.roll);
    printf("Phone Number :");
    scanf("%d",&s2.phone);

    printf("Enter details of Third student :\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s3.name,arr);
    printf("ID:");
    scanf("%d",&s3.id);
    printf("Roll Number :");
    scanf("%d",&s3.roll);
    printf("Phone Number :");
    scanf("%d",&s3.phone);

    printf("Enter details of fourth student :\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s4.name,arr);
    printf("ID:");
    scanf("%d",&s4.id);
    printf("Roll Number :");
    scanf("%d",&s4.roll);
    printf("Phone Number :");
    scanf("%d",&s4.phone);

    printf("Details of first student:\n");
    printf("Name=%s\n",s1.name);
    printf("ID=%d\n",s1.id);
    printf("Roll Number=%d\n",s1.roll);
    printf("Phone Number=%d\n",s1.phone);

    printf("Details of secound student:\n");
    printf("Name=%s\n",s2.name);
    printf("ID=%d\n",s2.id);
    printf("Roll Number=%d\n",s2.roll);
    printf("Phone Number=%d\n",s2.phone);

    printf("Details of third student:\n");
    printf("Name=%s\n",s3.name);
    printf("ID=%d\n",s3.id);
    printf("Roll Number=%d\n",s3.roll);
    printf("Phone Number=%d\n",s3.phone);

    printf("Details of fourth student:\n");
    printf("Name=%s\n",s4.name);
    printf("ID=%d\n",s4.id);
    printf("Roll Number=%d\n",s4.roll);
    printf("Phone Number=%d\n",s4.phone);
    return 0;
}