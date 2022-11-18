#include<stdio.h>
void sum();
int main(){
    sum();
    return 0;
}

void sum(){
    int i=1;
    int n,sum;
    sum=0;
    while(i!=10){
        printf("Enter %d number :",i);
        scanf("%d",&n);

        if(n<0){
            break;
        }
        sum+=n;
        i++;
    }
    printf("sum of numbers is %d",sum);
}