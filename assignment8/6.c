#include<stdio.h>
int main(){
    int num;
    printf("Enter the month as an number : ");
    scanf("%d",&num);
    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12){
        printf("There are 31 days in month %d",num);
    }
    else if(num==2){
        printf("there are 28 days in month %d",num);
    }
    else if(num==4 || num==6 || num==9 || num==11){
        printf("There are 30 days in month %d",num);
    }
    else {
        printf("Please enter a valid mounth number ");
    }
    return 0;
}