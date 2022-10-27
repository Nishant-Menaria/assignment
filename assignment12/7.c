#include<stdio.h>
void naturalr(int n);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    naturalr(n);
    return 0;
}

void naturalr(int n){
    for(int i=n;i>0;i--){
        printf("%d\n",i);
    }
}