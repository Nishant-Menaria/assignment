#include<stdio.h>
void fab(int n);
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    fab(n);
    return 0;
}

void fab(int n){
    int t1=0;
    int t2=1;
    int nextterm=t1+t2;
    printf("%d\n%d\n%d\n",t1,t2,nextterm);
    for(int i=3;i<=n;i++){
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        printf("%d\n",nextterm);
    }
}