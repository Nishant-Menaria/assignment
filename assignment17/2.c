#include<stdio.h>
int prime(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    prime(n);
    return 0;
}

int prime(int n){
    if(n==1){
        printf("1 is a not prime number");
        return 0;
    }
    else if(n==2){
        printf("2 is a prime number ");
        return 0;
    }
    for(int i=2;i<n;i++){
        int mod=n%i;
        if(mod==0){
            printf("%d is not a prime number ",n);
            break;
        }
        else if(i==n-1 && mod!=0){
            printf("%d is a prime number ",n);
        }
    }
    return 0;
}