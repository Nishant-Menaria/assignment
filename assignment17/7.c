#include<stdio.h>
void print();
int main(){
    print();
    return 0;
}

void print(){
    printf("Enter 10 Natural number that you want to print\n");
    int n;
    for(int i=1;i<=10;i++){
        printf("Enter %d number :",i);
        scanf("%d",&n);

        if(n==10){
            continue;
        }
        printf("number is : %d\n",n);
    }
}