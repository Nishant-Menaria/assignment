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

    printf("%s Obtain %f percentage\n",s1.name,(float)(s1.phy+s1.maths+s1.chem)*100/300);
    printf("%s Obtain %f percentage\n",s2.name,(float)(s2.phy+s2.maths+s2.chem)*100/300);
    printf("%s Obtain %f percentage\n",s3.name,(float)(s3.phy+s3.maths+s3.chem)*100/300);
    printf("%s Obtain %f percentage\n",s4.name,(float)(s4.phy+s4.maths+s4.chem)*100/300);
    printf("%s Obtain %f percentage\n",s5.name,(float)(s5.phy+s5.maths+s5.chem)*100/300);
    return 0;
}