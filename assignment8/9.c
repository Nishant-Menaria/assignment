#include<stdio.h>
int main(){
    int a;
    printf("Enter your number :");
    scanf("%d",&a);
    int b=a%10;
    printf("unit digit of number is %d",b);
    return 0;
}