#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    printf("enter third number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf(" %d is greatest among the three number",a);
    }
    else if(b>a && b>c){
        printf("%d is greatest among the three number ",b);
    }
    else {
        printf("%d is greatest among the three number ",c);
    }
    return 0;
}