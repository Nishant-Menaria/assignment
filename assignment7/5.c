#include<stdio.h>
int main(){
    int a;
    printf("ENter your number :");
    scanf("%d",&a);
    printf("%u\n",&a);
    if(a<0){
        printf("Negative Number ");
    }
    else{
        printf("Positive Number");
    }
    return 0;
}