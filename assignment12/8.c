#include<stdio.h>
void odd();
int main(){
    odd();
    return 0;
}

void odd(){
    for(int i=1;i<20;i=i+2){
        printf("%d\n",i);
    }
}