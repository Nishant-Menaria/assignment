#include<stdio.h>
void Nprime(int n);
int prime(int n); 
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    Nprime(n);
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

void Nprime(int n){
    int result=0;
    int i=1;
    while(result!=n){
        int _result=prime(i);
        if(_result==i){
            ++result;
            printf("%d is a prime number\n",i);
        }
        i++;
    }
}