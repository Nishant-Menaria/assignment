#include<stdio.h>
void armstrong(int n);
int countno(int n);
int main(){
    int n;
    printf("Enter your armstrong number :");
    scanf("%d",&n);

    armstrong(n);
    return 0;
}

void armstrong(int n){
    int Number=n;
    int power=countno(n);
    int sum=0;
    int i,mult;
    while(n>0){
        mult=1;
        int mod=n%10;
        i=power;
        while(i>0){
            mult*=mod;
            if(i==1){
                sum+=mult;
            }
            i--;
        }
        n/=10;
    }
    if(sum==Number){
        printf("The given number is an armstrong number.");
    }
    else{
        printf("The given number is not an armstrong number.");
    }
}

int countno(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
