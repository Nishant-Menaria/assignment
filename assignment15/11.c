#include<stdio.h>
int _HCF(int n,int m);
int main(){
    int n,m;
    printf("Enter your first number :");
    scanf("%d",&n);
    printf("Enter your secound number :");
    scanf("%d",&m);

    int HCF=_HCF(n,m);
    int result=n*m/HCF;
    printf("LCM of %d AND %d is %d",n,m,result);
    return 0;

}

int _HCF(int n,int m){
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