#include<stdio.h>
void cube(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    cube(n);
    return 0;
}

void cube(int n){
    int cube=n*n*n;
    printf("Cube of %d is %d",n,cube);
}