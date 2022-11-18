#include<stdio.h>
void sum();
int main(){
    sum();
    return 0;
}

void sum(){
    int n,sum;
    sum=0;
    printf("Enter numbers that you want add\n");
    for(int i=1;i<=10;i++){
        printf("Enter %d number :",i);
        scanf("%d",&n);

        if(n<0){
            continue;
        }
        sum=sum+n;
    }
    printf(" sum is %d",sum);
}