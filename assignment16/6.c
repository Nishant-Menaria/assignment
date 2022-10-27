#include<stdio.h>
void fact(int n);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    fact(n);
    return 0;
}

void fact(int n){
    for(int i=1;i<=n;i++){
        int mod=n%i;
        if(mod==0){
            printf("Factorial of %d is %d\n",n,i);
        }
    }
}