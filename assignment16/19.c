#include<stdio.h>
void armstrong_1000();
int armstrong(int n);
int main(){
    printf("Armstrong number under 1000\n");
    armstrong_1000();
    return 0;
}

int armstrong(int n){
    int sum=0;
    while(n!=0){
        int mod=n%10;
        n=n/10;
        sum=sum+mod*mod*mod;
    }
    if(sum==n){
        return n;
    }
}

void armstrong_1000(){
    int result;
    for(int i=1;i<=1000;i++){
        result=armstrong(i);
        if(result==i){
            printf("%d is an armstrong number\n",i);
        }
    }
}