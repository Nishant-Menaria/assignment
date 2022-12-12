#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int id;
    int phy;
    int chem;
    int maths;
};
int main(){
    struct student s[20];
    char arr[20];
    int count=1;
    for(int i=0;i<20;i++){
        printf("Enter %d student details :\n",count);
        printf("Name:");
        scanf("%s",&arr);
        strcpy(s[i].name,arr);
        printf("ID:");
        scanf("%d",&s[i].id);
        printf("Physics marks:");
        scanf("%d",&s[i].phy);
        printf("Maths marks:");
        scanf("%d",&s[i].maths);
        printf("Chemistry marks:");
        scanf("%d",&s[i].chem);
    }

    printf("Marks obtain by the student are:");
    for(int i=0;i<20;i++){
        printf("%s Obtain %d Percentage\n",s[i].name,(float)(s[i].phy+s[i].maths+s[i].chem)*100/300);
    }
    return 0;
}