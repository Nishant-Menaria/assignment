#include<stdio.h>
int main(){
    int n=1;
    printf("square of first 10 natural number are :");
    while(n<=10){
        int sq=n*n;
        printf("%d\n",sq);
        n++;
    }
    return 0;
}