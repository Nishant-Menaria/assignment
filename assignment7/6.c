#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    int b=a%2;
    if(b==0){
        printf("%d is even number ",a);
    }
    else {
        printf("%d is a odd number ",a);
    }
    return 0;
}