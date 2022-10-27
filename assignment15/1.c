#include<stdio.h>
float circle(float radius);
int main(){
    float radius,area;
    printf("Enter Radius :");
    scanf("%f",&radius);
    
    area=circle(radius);
    printf("Area of circle if :%f",area);
    return 0;
}

float circle(float radius){
    float area=3.14*radius*radius;
    return area;
}