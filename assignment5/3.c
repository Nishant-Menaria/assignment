#include<stdio.h>
int main(){
    float l,b;
    printf("enter length :");
    scanf("%f",&l);
    printf("enter breath :");
    scanf("%f",&b);
    float p=2*(l+b);
    printf("perimeter of rectange is : %f",p);
    return 0; 
}