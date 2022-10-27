#include<stdio.h>
void sum(int n);
int main(){
    int n;
    printf("Enter the number of pair you want to find sum of : ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

void sum(int n){
    int a,b;
    for(int i=1;i<=n;i++){
        printf("Enter first number :");
        scanf("%d",&a);
        printf("Enter first number :");
        scanf("%d",&b);
        printf("sum of both the number is :%d\n",a+b);
    }
}