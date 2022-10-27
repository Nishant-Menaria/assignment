#include<stdio.h>
int main(){
    float a;
    printf("enter the tempertaure in fahrenheit :");
    scanf("%f",&a);
    float b=(a-32)*5/9;
    printf("Temperature in celsius is :%f",b);
    return 0;
}

