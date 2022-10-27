#include<stdio.h>
int prime(int n);
void nextprime(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    nextprime(n);
    return 0;
}

int prime(int n){
    int fact=0;
    for(int i=1;i<=n;i++){
        int mod=n%i;
        if(mod==0){
            ++fact;
        }
    }
    if(fact==2){
        return n;
    }
}

void nextprime(int n){
    int result;
    while(result!=n){
        ++n;
        result=prime(n);
        if(result==n){
            printf("%d is the next prime number",n);
        }
    }
}