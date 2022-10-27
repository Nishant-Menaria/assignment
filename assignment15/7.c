#include<stdio.h>
int fact(int n);
int comb(int n,int r);
int main(){
    int n,r;
    printf("Enter N :");
    scanf("%d",&n);
    printf("Enter r :");
    scanf("%d",&r);

    int comb2=comb(n,r);
    printf("the combinations of %dC%d : %d",n,r,comb2);
    return 0;
}

int fact(int n){
    int one=1;
    int i=1;
    while(i<=n){
        one=one*i;
        if(i==n){
            return one;
        }
        i++;
    }
}

int comb(int n,int r){
    int c=n-r;
    int result=fact(n)/(fact(r)*fact(c));
    return result;
}