#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of first sub :");
    scanf("%d",&sub1);
    printf("enter marks of secound sub :");
    scanf("%d",&sub2);
    printf("enter marks of third sub :");
    scanf("%d",&sub3);
    printf("enter marks of fourth sub :");
    scanf("%d",&sub4);
    printf("enter marks of fifth sub :");
    scanf("%d",&sub5);
    int sum=sub1 + sub2 + sub3 + sub4 + sub5;
    printf("total marks obtain by the student is : %d",sum);
    return 0;
}