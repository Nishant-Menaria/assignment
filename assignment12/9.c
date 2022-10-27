#include<stdio.h>
void odd();
int main(){
    odd();
    return 0;
}

void odd(){
    for(int i=19;i>0;i=i-2){
        printf("%d\n",i);
    }
}