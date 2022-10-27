#include<stdio.h>
int main(){
    int a;
    printf("Enter your number :");
    scanf("%d",&a);
    int div=a%10;
    if(a<0){
        printf("Negative");
    }
    else if(a>0){
        printf("Positive\n");
        if(div==0){
            printf("%d is divisible by 10",a);
        }
    }
    else{
        printf("Zero");
    }
}