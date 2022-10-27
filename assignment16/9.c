#include<stdio.h>
void reverse(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    reverse(n);
    return 0;
}

void reverse(int n){
    while(n!=0){
        int mod=n%10;
        n=n/10;
        printf("%d",mod);
    }
}