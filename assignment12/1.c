#include<stdio.h>
void hello();
int main(){
    hello();
    return 0;
}

void hello(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("HELLO WORLD\n");
    }
}