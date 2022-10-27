#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter your salary :");
    scanf("%f",&a);
    b=0.50*a;
    printf("Amans dressing allowance is : %f\n",b);
    c=0.20*a;
    printf("Amans house rent is : %f\n",c);
    d=a+b+c;
    printf("Amans total gross salary is : %f\n",d);
    return 0;
}