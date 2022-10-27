#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to print the hello world : ");
    scanf("%d",&n);
    while(n>0){
        printf("HELLO WORLD\n");
        n--;
    }
    return 0;
}