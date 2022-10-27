#include<stdio.h>
void Bprime(int n,int m);
int prime(int n);
int main(){
    int n,m;
    printf("enter first number :");
    scanf("%d",&n);
    printf("enter secound number :");
    scanf("%d",&m);

    Bprime(n,m);
    return 0;
}

void Bprime(int n,int m){
    for(n;n<=m;n++){
        int result=prime(n);
        if(result==n){
            printf("%d\n",n);
        }
    }
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