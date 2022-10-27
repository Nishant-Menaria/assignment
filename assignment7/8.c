#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the cofficient of x^2 :");
    scanf("%d",&a);
    printf("Enter the cofficient of x :");
    scanf("%d",&b);
    printf("Enter the constant :");
    scanf("%d",&c);
    int d=b*b-4*a*c;
    if(d>0){
        printf("The given quadratic equation has real and distinct roots");
    }
    else if(d==0){
        printf("The given quadratic equation has real and equal roots");
    }
    else if(d<0){
        printf("The given quadratic equation has imaginary roots");
    }
    return 0;
}