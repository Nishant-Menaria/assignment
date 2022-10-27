#include<stdio.h>
/*convert Fahrenheit temperature to celcius equivalent*/
int main(){

    int fahr,celcius;
    printf("Enter temperature in fahr\n");
    scanf("%d",&fahr);
    celcius=5/9*(fahr-32);
    
    celcius=5*(fahr-32)/9;
    celcius=5.0/9*(fahr-32);

    printf("Temprature in celcius is = %d\n",celcius);
    
return 0;
}