#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    int div2=num%2;
    int div3=num%3;
    if(div2==0 && div3==0){
        printf("%d is divislible by both 2 and 3",num);
    }
    else if(div2==0){
        printf("%d is divisible by 2",num);
    }
    else if(div3==0){
        printf("%dis divisible by 3 ",num);
    }
    else {
        printf("%d is not divisible by 2 and 3",num);
    }
    return 0;
}