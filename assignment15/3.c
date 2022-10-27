#include<stdio.h>
int evenodd(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    int a=evenodd(n);
    if(a==1){
        printf("The %d is even",n);
    }
    else{
        printf("the %d is odd",n);
    }
return 0;
}

int evenodd(int n){
    int mod2=n%2;
    if(mod2==0){
        return 1;
    }
    else{
        return 0;
    }
}