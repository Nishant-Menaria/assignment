#include<stdio.h>
int main(){
    int num;
    printf("Enter 1 for sum : 2 for difference : 3 for product : 4 for quotient :");
    scanf("%d",&num);
    if(num==1){
        int a,b;
        printf("enter first number :");
        scanf("%d",&a);
        printf("enter secound number :");
        scanf("%d",&b);
        printf("Sum of two number is : %d",a+b);
    }
    else if(num==2){
        int a,b;
        printf("enter first number :");
        scanf("%d",&a);
        printf("enter secound number :");
        scanf("%d",&b);
        printf("Difference of two numbers is : %d",a-b);
    }
    else if(num==3){
        int a,b;
        printf("enter first number :");
        scanf("%d",&a);
        printf("enter secound number :");
        scanf("%d",&b);
        printf("product of two numbers is : %d",a*b);     
    }
    else if(num==4){
        int a,b;
        printf("enter first number :");
        scanf("%d",&a);
        printf("enter secound number :");
        scanf("%d",&b);
        printf("quotient of two numbers is : %d",a/b);
    }
    return 0;
}