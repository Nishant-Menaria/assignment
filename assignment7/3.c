#include<stdio.h>
int main(){
    int a;
    printf("enter a number between 1-100 :");
    scanf("%d",&a);
    if(a>100){
        printf("Please enter a number between 1-100 ");
    }
    else if(a>=50 && a<=100){
    printf("SUCCESS");
    }
    else{
        printf("FAIL");
    }
    return 0;

}