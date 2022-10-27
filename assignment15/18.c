#include<stdio.h>
void square(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    square(n);
    return 0;
}

void square(int n){
    int sq=n*n;
    printf("Square of %d is %d",n,sq);
}