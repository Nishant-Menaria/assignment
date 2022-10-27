#include<stdio.h>
int nextprime(int n);
int prime(int n);
int main(){
    int n;
    printf("Enter your number:  ");
    scanf("%d",&n);

    int result=nextprime(n);
    printf("The next prime number is %d",result);
    return 0;
}

int nextprime(int n){
    int result;
    while(result!=n){
        ++n;
        result=prime(n);
        if(result==n){
            return n;
        }
    }
}

int prime(int n){
    int fact=0;
    int i=1;
    while(i<=n){
        int mod=n%i;
        if(mod==0){
            ++fact;
        }
        ++i;
    }
    if(fact==2){
        return n;
    }
}