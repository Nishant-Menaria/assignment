#include<stdio.h>
void HCF(int n,int m);
int main(){
    int n,m;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter secound number :");
    scanf("%d",&m);

    HCF(n,m);
    return 0;
}

void HCF(int n,int m){
    int HCF;
    for(int i=1;i<=n;i++){
        int mod=n%i;
        int _mod=m%i;
        if(mod==0 && _mod==0){
            HCF=i;
        }
    }
    printf("HCF od %d and %d is :%d",n,m,HCF);
}