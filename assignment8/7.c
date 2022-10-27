#include<stdio.h>
int main(){
    int USD;
    printf("Enter your amount in USD :");
    scanf("%d",&USD);
    int INR=USD*80;
    printf(" USD in INR is : %d",INR);
    return 0;
}