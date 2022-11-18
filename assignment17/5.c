#include<stdio.h>
void print();
int main(){
    print();
    return 0;
}

void print(){
    int n;
    while(n!=0){
        printf("Enter your number :");
        scanf("%d",&n);

        if(n==0){
            break;
        }
        else{
            printf("%d\n",n);
        }
    }
}