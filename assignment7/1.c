#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater ",a);
    }
    else {
        printf("%d is greater ",b);
    }
    return 0;

}