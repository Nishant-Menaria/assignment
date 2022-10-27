#include<stdio.h>
int main(){
    int n=20;
    while(n>0){
        printf("%d\n",n);
        int even=n-2;
        n=even;
    }
}