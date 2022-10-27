#include<stdio.h>
int numb(int n,int N);
int main(){
    int n,N;
    printf("enter your number you wnat to check :");
    scanf("%d",&n);
    printf("Enter the nmber :");
    scanf("%d",&N);

    int result=numb(n,N);
    switch(result){
        case 1:{
            printf("%d is present in %d",n,N);
            break;
        }
        default:{
            printf("%d is not present in %d",n,N);
        }
    }
    return 0;
    
}

int numb(int n,int N){
    for(int i=1;i<=4;i++){
        int mod=N%10;
        N=N/10;
        
        if(mod==n){
            return 1;
        }
    }
    return 0;
}
