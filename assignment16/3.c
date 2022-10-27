#include<stdio.h>
int odsum(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=odsum(n);
    printf("Sum of first %d odd natural number is %d",n,result);
    return 0;
}

int odsum(int n){
    int sum=0;
    int n2=2*n;
    for(int i=1;i<=n2;i=i+2){
        sum=sum+i;
        if(i==n2-1){
            return sum;
        }
    }
    
}