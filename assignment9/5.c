#include<stdio.h>
int main(){
    int a;
    printf("Enter your year :");
    scanf("%d",&a);
    int div=a%4;
    if("div==0"){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",1);
    }
    return 0;
}