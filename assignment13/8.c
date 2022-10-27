#include<stdio.h>
void p2n(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    p2n(n);
    return 0;
}

void p2n(int n){
    switch(n){
        default:{
            printf("converting  %d into  %d",n,n*-1);
        }
    }
} 