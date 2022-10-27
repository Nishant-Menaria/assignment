#include<stdio.h>
float intrest(float p,float r,float t);
int main(){
    float p,t,r;
    printf("Enter principle value :");
    scanf("%f",&p);
    printf("Enter intrest rate :");
    scanf("%f",&r);
    printf("Enter time period(in years) :");
    scanf("%f",&t);

    r=r/100;

    float sintrest=intrest(p,r,t);
    printf("Simple intrest is : %f",sintrest);
    return 0;
}

float intrest(float p,float r,float t){
    return p*r*t;
}