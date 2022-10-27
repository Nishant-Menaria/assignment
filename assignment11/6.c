#include<stdio.h>
int main(){
    int n,fact;
    fact=1;
    printf("Enter your Number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact=fact*i;
        if(n==i){
            printf("Factorial of given number is : %d",fact);
        }
    }
    return 0;

}