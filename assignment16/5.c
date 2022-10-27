#include<stdio.h>
int cubsum(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=cubsum(n);
    printf("Sum of cubes of first %d natural number is %d",n,result);
    return 0;
}

int cubsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i*i*i;
        if(i==n){
            return sum;
        }
    }
}