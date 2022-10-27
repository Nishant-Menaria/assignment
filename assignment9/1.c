#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter secound number :");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);
        if(a>=500 && a>=100){
            printf("%d",a);
        }
    }
    else if(b>a){
        printf("%d is greater than %d\n",b,a);
        if(b>=500 && b<=1000){
            printf("%d",b);
        }
    }
    return 0;
}