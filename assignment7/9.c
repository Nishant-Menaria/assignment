#include<stdio.h>
int main(){
    int cprise,sprise;
    printf("Enter cost prise :");
    scanf("%d",&cprise);
    printf("Enter Selling Prise :");
    scanf("%d",&sprise);
    if(cprise>sprise){
        int loss=cprise-sprise;
        float lp=(loss*100)/cprise;
        printf("the lost percentage is : %f",lp);
    }
    else{
        int profit=sprise-cprise;
        float pp=(profit*100)/cprise;
        printf("the profit percentaeg is : %f",pp);
    }
    return 0;
}