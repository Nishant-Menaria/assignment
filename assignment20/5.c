#include<stdio.h>
#include<string.h>
struct student_marks
{
    char name[20];
    int id;
    int phy;
    int maths;
    int chem;
}s1,s2,s3,s4,s5;

int main(){
    char arr[20];
    printf("Enter details of first student:\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s1.name,arr);
    printf("ID:");
    scanf("%d",&s1.id);
    printf("Physics marks:");
    scanf("%d",&s1.phy);
    printf("Maths marks:");
    scanf("%d",&s1.maths);
    printf("Chemistry marks:");
    scanf("%d",&s1.chem);

    printf("Enter details of Secound student:\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s2.name,arr);
    printf("ID:");
    scanf("%d",&s2.id);
    printf("Physics marks:");
    scanf("%d",&s2.phy);
    printf("Maths marks:");
    scanf("%d",&s2.maths);
    printf("Chemistry marks:");
    scanf("%d",&s2.chem);

    printf("Enter details of Third student:\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s3.name,arr);
    printf("ID:");
    scanf("%d",&s3.id);
    printf("Physics marks:");
    scanf("%d",&s3.phy);
    printf("Maths marks:");
    scanf("%d",&s3.maths);
    printf("Chemistry marks:");
    scanf("%d",&s3.chem);

    printf("Enter details of fourth student:\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s4.name,arr);
    printf("ID:");
    scanf("%d",&s4.id);
    printf("Physics marks:");
    scanf("%d",&s4.phy);
    printf("Maths marks:");
    scanf("%d",&s4.maths);
    printf("Chemistry marks:");
    scanf("%d",&s4.chem);

    printf("Enter details of fifth student:\n");
    printf("Name:");
    scanf("%s",&arr);
    strcpy(s5.name,arr);
    printf("ID:");
    scanf("%d",&s5.id);
    printf("Physics marks:");
    scanf("%d",&s5.phy);
    printf("Maths marks:");
    scanf("%d",&s5.maths);
    printf("Chemistry marks:");
    scanf("%d",&s5.chem);

    printf("Details of first student :\n");
    printf("Name=%s\n",s1.name);
    printf("Id=%d\n",s1.id);
    printf("Physics marks=%d\nMaths marks=%d\nChemistry marks=%d\n",s1.phy,s1.maths,s1.chem);

    printf("Details of secound student :\n");
    printf("Name=%s\n",s2.name);
    printf("Id=%d\n",s2.id);
    printf("Physics marks=%d\nMaths marks=%d\nChemistry marks=%d\n",s2.phy,s2.maths,s2.chem);

    printf("Details of Third student :\n");
    printf("Name=%s\n",s3.name);
    printf("Id=%d\n",s3.id);
    printf("Physics marks=%d\nMaths marks=%d\nChemistry marks=%d\n",s3.phy,s3.maths,s3.chem);

    printf("Details of fourth student :\n");
    printf("Name=%s\n",s4.name);
    printf("Id=%d\n",s4.id);
    printf("Physics marks=%d\nMaths marks=%d\nChemistry marks=%d\n",s4.phy,s4.maths,s4.chem);

    printf("Details of fifth student :\n");
    printf("Name=%s\n",s5.name);
    printf("Id=%d\n",s5.id);
    printf("Physics marks=%d\nMaths marks=%d\nChemistry marks=%d\n",s5.phy,s5.maths,s5.chem);
    return 0;
}