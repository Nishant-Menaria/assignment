#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to find the sum of pair : ");
    scanf("%d",&n);

    while(n>0){
        int a,b;
        printf("Enter first number :");
        scanf("%d",&a);
        printf("Enter secound number :");
        scanf("%d",&b);
        int c=a+b;
        printf("the sum of both the number is : %d\n",c);
    }
    return 0;
}