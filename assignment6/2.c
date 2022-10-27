#include<stdio.h>
int main(){
    int marks[5];
    printf("ENter marks of first subject :");
    scanf("%d",&marks[0]);
    printf("ENter marks of secound subject :");
    scanf("%d",&marks[1]);
    printf("ENter marks of third subject :");
    scanf("%d",&marks[2]);
    printf("ENter marks of fourth subject :");
    scanf("%d",&marks[3]);
    printf("ENter marks of fifth subject :");
    scanf("%d",&marks[4]);

    int sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    float per=sum/500*100;

    printf("Total marks obtain by the student is : %d\n",sum);
    printf("Percentage obtain by the student is %f\n",per);
    printf("Average marks obtain by the student is : %d\n",sum/5);
    return 0;
}