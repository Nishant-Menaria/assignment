#include<stdio.h>
int main(){
    int n=1;
    int sum=0;
    for(int i=1;i<=10;i=i+2){
        sum=sum+i;
    }   
    printf("Sum of odd number between 1-10 is : %d",sum);
    return 0;
}