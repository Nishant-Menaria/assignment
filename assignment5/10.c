#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("enter marks of first subject :");
    scanf("%f",&a);
    printf("enter marks of secound subject :");
    scanf("%f",&b);
    printf("enter marks of third subject :");
    scanf("%f",&c);
    printf("enter marks of fourth subject :");
    scanf("%f",&d);
    printf("enter marks of fifth subject :");
    scanf("%f",&e);
    float percentage=(a+b+c+d+e)/500*100;
    printf("percentage obtain by the student is : %f",percentage);
    return 0;
}