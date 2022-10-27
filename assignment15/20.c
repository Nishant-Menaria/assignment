#include<stdio.h>
void fact();
int main(){
    fact();
    return 0;
}

void fact(){
    int one=1;
    int sum=0;
    for(int i=1;i<=5;i++){
        one=one*i;
        int div=one/i;
        sum=sum+div;
        if(i==5){
            printf("Sum of given series is %d",sum);
        }
    }
}