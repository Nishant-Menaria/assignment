#include<stdio.h>
void prime_100();
int prime(int n);
int main(){
    printf("All the prime number under 100 are :");
    prime_100();
    return 0;
}

int prime(int n){
    int fact=0;
    for(int i=1;i<=n;i++){
        int mod=n%i;
        if(mod==0){
            ++fact;
        }
    }
    if(fact==2){
        return n;
    }
}

void prime_100(){
    for(int i=1;i<=100;i++){
        int result=prime(i);
        if(result==i){
            printf("%d\n",i);
        }
    }
}