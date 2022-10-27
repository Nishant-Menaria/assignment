#include<stdio.h>
int main(){
    int a;
    printf("ENter your number :");
    scanf("%d",&a);
    if(a>10){
        printf("%d is greater then 10",a);
    }
    else {
        printf("%d is less than 10",a);
    }
    return 0;
}