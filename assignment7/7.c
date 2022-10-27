#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    int b=a%5;
    if(b==0){
        printf("%d is divisible by 5",a);
    }
    else{
        printf("%d is not divisible by 5",a);
    }
    return 0;
}