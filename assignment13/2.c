#include<stdio.h>
void add();
void sub();
void div();
void mul();
int main(){
    int n;
    printf("1.Addition\n2.Subtraction\n3.multiplication\n4.division\n5.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&n);

    switch(n){
        case 1 :{
            add();
            break;
        }
        case 2 :{
            sub();
            break;
        }
        case 3 :{
            mul();
            break;
        }
        case 4 :{
            div();
            break;
        }
        case 5 :{
            break;
        }
        default :{
            printf("Enter a valid number");
        }
    }
    return 0;
}

void add(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter secound number :");
    scanf("%d",&b);
    printf("sum of both the number is :%d",a+b);
}

void sub(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter secound number :");
    scanf("%d",&b);
    printf("sub of both the number is :%d",a-b);
}

void mul(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter secound number :");
    scanf("%d",&b);
    printf("mul of both the number is :%d",a*b);
}

void div(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter secound number :");
    scanf("%d",&b);
    printf("div of both the number is :%d",a/b);
}
