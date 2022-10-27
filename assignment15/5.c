#include<stdio.h>
void odd(int n);
int main(){
    int n;
    printf("Enter your number ");
    scanf("%d",&n);
    odd(n);
    return 0;
}

void odd(int n){
    int N=2*n;
    for(int i=1;i<=N;i=i+2){
        printf("%d\n",i);
    }
}