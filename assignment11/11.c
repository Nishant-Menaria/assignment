#include<stdio.h>
int main(){
    int n=19;
    while(n>0){
        printf("%d\n",n);
        int odd=n-2;
        n=odd;
    }
}