#include<stdio.h>
void zero(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    zero(n);
    return 0;
}

void zero(int n){
    int mod=n%10;
    int sub=n-mod;
    printf("THE number=%d in the form of zero is=%d",n,sub);
}