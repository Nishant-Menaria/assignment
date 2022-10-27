#include<stdio.h>
int main(){
    int n,t1,t2,nextterm;
    printf("Enter your number :");
    scanf("%d",&n);

    t1=0;
    t2=1;
    nextterm=t1+t2;
    printf("%d\n%d\n%d\n",t1,t2,t2);
    for(int i=3;i<=n;++i){
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        printf("%d\n",nextterm);
    }
    return 0;

}