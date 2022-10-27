#include<stdio.h>
int main(){
    int a;
    printf("ENter your number :");
    scanf("%d",&a);
    if(a<0){
        printf("Negative Number ");
    }
    else if(a==0){
        printf("the given numer is Zero");
    }
    else{
        printf("Positive Number");
    }
    return 0;
}