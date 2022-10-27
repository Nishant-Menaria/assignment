#include<stdio.h>
int armstrong(int n);
int main(){
    int n;
    printf("Enter the number you want to chech its a armstrong number or not :");
    scanf("%d",&n);

    int result=armstrong(n);
    if(result==1){
        printf("%d is an armstrong number ",n);
    }
    else if(result==0){
        printf("%d is not an armstrong number",n);
    }
    return 0;
}

int armstrong(int n){
    int N=n;
    int sum=0;
    while(n>0){
        int mod=n%10;
        int n=n/10;
        sum=sum+mod*mod*mod;
        if(sum==N ){
            return 1;
        }
    }
    return 0;
}