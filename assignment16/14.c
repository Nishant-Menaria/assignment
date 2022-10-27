#include<stdio.h>
int coprime(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=coprime(n);
    if(result==1){
        printf("%d is a prime number ",n);
    }
    else{
        printf("%d is a coprime number",n);
    }
    return 0;
}

int coprime(int n){
    int fact=0;
    for(int i=1;i<=n;i++){
        int mod=n%i;
        if(mod==0){
            ++fact;
        }
    }
    if(fact==2){
        return 1; 
    }
    else{
        return 0;
    }
}