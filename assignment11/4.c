#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to print natural number :");
    scanf("%d",&n);

    int i=1;

    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;

}