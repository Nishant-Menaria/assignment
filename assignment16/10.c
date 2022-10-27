#include<stdio.h>
int fab(int n);
int main(){
    int n;
    printf("Enter the N term your want to find :");
    scanf("%d",&n);

    int result=fab(n);
    printf("%d th term of fabonnaci series is %d",n,result);
    return 0;   
}

int fab(int n){
    int t1=0;
    int t2=1;
    int nextterm=t1+t2;
    switch(n){
        case 1:{return 0;}
        case 2:{return 1;}
        case 3:{return 1;}
    }
    int i=4;
    while(i<=n){
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        if(i==n){
            return nextterm;
        }
        i=i+1;
    }
}