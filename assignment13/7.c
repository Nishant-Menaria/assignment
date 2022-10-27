#include<stdio.h>
void year(int n);
int main(){
    int n;
    printf("Enter your year :");
    scanf("%d",&n);

    year(n);
    return 0;
}

void year(int n){
    int div=n%4;
    switch(div){
        case 0:{
            printf("%d is a leap year ",n);
            break;
        }
        default:{
            printf("%d is not a leap year",n);
        }
    }
}