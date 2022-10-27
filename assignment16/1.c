#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=sum(n);
    printf("Sum of first %d natural number is %d",n,result);
    return 0;
}

int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(i==n){
            return sum;
        }
    }
}