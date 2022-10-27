#include<stdio.h>
void coprime(int n,int m);
int main(){ 
    int n,m;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter secound number :");
    scanf("%d",&m);

    coprime(n,m);
    return 0;
}

int coprime(int n,int m){
    int fact=0;
    for(int i=1;i<=n && i<=m;i++){
        int mod=n%i;
        int _mod=m%i;
        if(mod==0 && _mod==0){
            ++fact;
        }
    }
    if(fact==1){
        printf("%d and %d is a co prime number ",n,m);
    }
    else{
        printf("%d and %d is not a co-prime number",n,m); 
    }
}
