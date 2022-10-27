#include<stdio.h>
int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    int mod=n%10;
    int a=n-mod;
    printf("The number is %d",a);
    return 0;
}