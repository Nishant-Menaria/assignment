#include<stdio.h>
void table2();
int main(){
    table2();
    return 0;
}

void table2(){
    int n=2;
    for(int i=1;i<=10;i++){
        int tab=i*n;
        printf("2*%d=%d\n",i,tab);
    }
}