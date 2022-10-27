#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to print natural number ");
    scanf("%d",&n);
    while(n>0){
        printf("%d\n",n);
        n--;
    }
    return 0;
}