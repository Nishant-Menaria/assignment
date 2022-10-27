#include<stdio.h>
void even();
int main(){
    even();
    return 0;
}

void even(){
    for(int i=20;i>0;i=i-2){
        printf("%d\n",i);
    }
}