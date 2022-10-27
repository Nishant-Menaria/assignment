#include<stdio.h>
int main(){
    int a;
    printf("Enter your number :");
    scanf("%d",&a);
    int mod=a%10;
    printf("the digit at once place is %d\n",mod);
    int div=a/10;
    int mod2=div%10;
    printf("the digit at tens place us %d\n",mod2); 
    if("mod==mod2"){
        printf("The digits at once and tense place is same\n ");
    }
    return 0;
}