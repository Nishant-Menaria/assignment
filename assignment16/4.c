#include<stdio.h>
int sqsum(int n);
int main(){
    int n;
    printf("Ente your number :");
    scanf("%d",&n);

    int result=sqsum(n);
    printf("Sum of square of first %d natural number is %d",n,result);
    return 0;
}

int sqsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i*i;
        if(i==n){
            return sum;
        }
    }
}