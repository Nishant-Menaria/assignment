#include<stdio.h>
int prime(int n);
int Bprime(int n,int m);
int main(){
    int n,m;
    printf("Enter first numbers :");
    scanf("%d",&n);
    printf("enter secound number :");
    scanf("%d",&m);

    Bprime(n,m);
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
    if(fact==2 || fact==1){
        return n;
    }
}

int Bprime(int n,int m){
    while(n<m && n!=m){
        ++n;
        int result=prime(n);
        if(result==n){
            printf("%d\n",n);
        }
    }
}