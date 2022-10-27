#include<stdio.h>
int evsum(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=evsum(n);
    printf("Sum of first %d even natrual number is %d ",n,result);
    return 0;
}

int evsum(int n){
    int sum=0;
    int n2=2*n;
    for(int i=2;i<=n2;i=i+2){
        sum=sum+i;
        if(i==n2){
            return sum;
        }
    }
}