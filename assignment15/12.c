#include<stdio.h>
int HCF(int n,int m);
int main(){
    int n,m;
    printf("Enter first number : ");
    scanf("%d",&n);
    printf("Enter secound number : ");
    scanf("%d",&m);

    int result=HCF(n,m);
    printf("HCF of %d AND %d is :%d ",n,m,result);
    return 0;
}

int HCF(int n,int m){
    int HCF;
    for(int i=1;i<=n && i<=m;i++){
        int mod=n%i;
        int _mod=m%i;
        if(mod==0 && _mod==0){
            HCF=i;
        }
    }
    return HCF;
}