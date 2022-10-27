#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    int div7=num%7;
    int div3=num%3;
    if(div7==0 && div3==0){
        printf("%d is divislible by both 7 and 3",num);
    }
    else if(div7==0){
        printf("%d is divisible by 7",num);
    }
    else if(div3==0){
        printf("%d is divisible by 3",num);
    }
    else {
        printf("%d is not divisible by 7 and 3",num);
    }
    return 0;
}