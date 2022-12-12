#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int id;
    int roll;
    unsigned int phone;
};
int main(){
    struct student s[20];
    char arr[20];
    int count=1;
    for(int i=0;i<20;i++){
        printf("Enter details of %d student :\n",count);
        printf("Name=");
        scanf("%s",&arr);
        strcpy(s[i].name,arr);
        printf("ID=");
        scanf("%d",&s[i].id);
        printf("Roll Number=");
        scanf("%d",&s[i].roll);
        printf("Phone Number=");
        scanf("%d",&s[i].phone);
        count++;
    }

    count=1;
    for(int i=0;i<20;i++){
        printf("Detail of %d student:\n",count);
        printf("Name=%s\n",s[i].name);
        printf("Id=%d\n",s[i].id);
        printf("ROll Number=%d\n",s[i].roll);
        printf("Phonr Number=%d\n",s[i].phone);
    }
    return 0;
}