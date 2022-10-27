#include<stdio.h>
int main(){
    int marks[5];
    printf("enter marks of first subject :");
    scanf("%d",&marks[0]);
    printf("enter marks of secound subject :");
    scanf("%d",&marks[1]);
    printf("enter marks of third subject :");
    scanf("%d",&marks[2]);
    printf("enter marks of fourth subject :");
    scanf("%d",&marks[3]);
    printf("enter marks of fifth subject :");
    scanf("%d",&marks[4]);
    if(marks[5]>=33){
        printf("PASSED\n");
        int sum=marks[0]+marks[2]+marks[1]+marks[3]+marks[4];
        printf("total marks obtain by student is %d",sum);
    }
    else if(marks[5]<33){
        printf("FAIL");
    }
    return 0;
}