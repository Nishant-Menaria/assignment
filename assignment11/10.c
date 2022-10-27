#include<stdio.h>
int main(){
    int n=1;
    while(n<20){
        printf("%d\n",n);
        int odd=n+2;
        n=odd;
    }
}