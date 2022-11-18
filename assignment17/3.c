#include<stdio.h>
void PNatural();
int main(){
    PNatural();
    return 0;
}

void PNatural(){
    printf("Enter 10 natural number \n");
    int i=1;
    int n;
    while(i!=10){
        printf("Enter %d number :",i);
        scanf("%d",&n);

        if(n==10){
            break;
        }
        printf("number is : %d\n",n);
    }
}