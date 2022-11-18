#include<stdio.h>
void addnumber();
int prime(int n);
int main(){
    addnumber();
    return 0;
}

int prime(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    for(int i=2;i<n;i++){
        int mod=n%i;
        if(mod==0){
            return 0;
        }
        else if(i=n-1 && mod!=0){
            return 1;
        }
    }
}

void addnumber(){
    int n,sum;
    sum=0;
    printf("Enter 10 natural number you want to add\n");
    for(int i=1;i<=10;i++){
        printf("Enter %d number :",i);
        scanf("%d",&n);
        int result=prime(n);
        if(result==1){
            continue;
        }
        sum=sum+n;
    }
    printf("Sum is %d",sum);
}