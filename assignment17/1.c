#include<stdio.h>
void addcomp();
int prime(int n);
int main(){
    addcomp();
    return 0;
}

int prime(int n){
    if(n==2){
        return 1;
    }
    else if(n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        int mod=n%i;
        if(mod==0){
            return 0;
        }
        else if(i==n-1 && mod!=0){
            return 1;
        }
    }
}

void addcomp(){
    int i=1;
    int n;
    int sum=0;
    while(i!=10){
        printf("Enter your number :");
        scanf("%d",&n);

        int result=prime(n);
        if(result==1){
            break;
        }
        sum=sum+n;
        i++;
    }
    printf("Sum is :%d",sum);
}