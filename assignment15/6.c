#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    int Fact=fact(n);
    printf("Factorial of %d is :%d",n,Fact);

    return 0;
}

int fact(int n){
    int one=1;
    for(int i=1;i<=n;i++){
        one=one*i;
        if(n==i){
            return one;
        }
    }
}