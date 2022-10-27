#include<stdio.h>
int count(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int result=count(n);
    printf("There are %d number in the %d",result,n);
    return 0;
}

int count(int n){
    int i=0;
    while(n!=0){
        n/=10;
        ++i;
        if(n==0){
            return i;
        }
    }
}