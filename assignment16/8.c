#include<stdio.h>
void fact(int n,int m);
int main(){
    int n,m;
    printf("Enter first number :");
    scanf("%d",&n);
    printf("Enter secound number :");
    scanf("%d",&m);

    fact(n,m);
    return 0;
}

void fact(int n,int m){
    int HCF;
    for(int i=1;i<=n && i<=m;i++){
        int div=n%i;
        int _div=m%i;
        if(div==0 && _div==0){
            HCF=i;
        }
    }
    int LCM=n*m/HCF;
    printf("LCM of %d and %d is %d",n,m,LCM);
}