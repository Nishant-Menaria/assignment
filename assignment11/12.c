#include<stdio.h>
int main(){
    int n=2;
    while(n<=20){
        printf("%d\n",n);
        int even=n+2;
        n=even;
    }
}