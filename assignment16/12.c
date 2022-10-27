#include<stdio.h>
int fab(int n);
int main(){
    int n;
    printf("Enter the number you want to check that it present in fabonnaci series or not :");
    scanf("%d",&n);

    int result=fab(n);
    if(result==1){
        printf("%d is present in fabonnaci series",n);
    }
    else if(result==0){
        printf("%d is not present in fabonnaci series",n);
    }
    return 0;
}

int fab(int n){
    int t1=0;
    int t2=1;
    int nextterm=t1+t2;
    if(n==0 || n==1 ){
        return 1;
    }
    for(int i=3;i<=30;++i){
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        if(nextterm==n){
            return 1;
        }
        else if(nextterm>n){
            return 0;
        }

    }
}