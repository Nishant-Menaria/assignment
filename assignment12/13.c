#include<stdio.h>
void square();
int main(){
    square();
    return 0;
}

void square(){
    for(int i=1;i<=10;i++){
        int sq=i*i;
        printf("square of %d is : %d\n",i,sq);
    }
}