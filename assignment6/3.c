#include<stdio.h>
int main(){
    char a;
    printf("Enter a for additio : s for subtraction : m for multiplicatin : d for division :");
    scanf("%c",&a);
    int b,c;
    if(a=='a'){
        printf("Enter first number :");
        scanf("%d",&b);
        printf("Enter secound number :");
        scanf("%d",&c);
        printf("Addition of both the number is : %d",b+c);
    }
    else if(a=='s'){
        printf("Enter first number :");
        scanf("%d",&b);
        printf("Enter secound number :");
        scanf("%d",&c);
        printf("subtraction of both the number is : %d",b-c);
    }
    else if("a=='m"){
        printf("Enter first number :");
        scanf("%d",&b);
        printf("Enter secound number :");
        scanf("%d",&c);
        printf("multiplication of both the number is : %d",b*c);
    }
    else if(a=='d'){
        printf("Enter first number :");
        scanf("%d",&b);
        printf("Enter secound number :");
        scanf("%d",&c);
        printf("divition of both the number is : %d",b/c);
    }
    else{
        printf("Please enter a valid character ");
    }
    return 0;
}