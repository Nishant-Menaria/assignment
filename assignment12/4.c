#include<stdio.h>
void fact(int n);
int main(){
    int n;
    printf("Enter the number your want to find facorial of :");
    scanf("%d",&n);
    fact(n);
    return 0;
}

void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        if(i==n){
            printf("factorail of %d is : %d",n,fact);
        }
    }

}