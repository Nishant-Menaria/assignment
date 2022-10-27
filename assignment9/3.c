#include<stdio.h>
int main(){
    int a;
    printf("Enter your number :");
    scanf("%d",&a);
    int div=a%2;
    if(div==0){
        printf("%d is an even number\n ",a);
        int div2=a%3;
        if(div==0){
            printf("%d is divisible by both 2 and 3",a);
        }
    }
    else {
        printf("%d is an odd number \n",a);
        int div3=a%5;
        if(div3==0){
            printf("%d is divisible by 5",a);
        }
    }
    return 0;
}