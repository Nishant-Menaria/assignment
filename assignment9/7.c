#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side of triangle :");
    scanf("%d",&a);
    printf("Enter side of triangle :");
    scanf("%d",&b);
    printf("Enter side of triangle :");
    scanf("%d",&c);
    if(a==b && b==c && c==a){
        printf("the triangle of given sides is an equilateral triangle ");
    }
    else if(a==b && b!=c || b==c && b!=a || a==c && a!=b){
        printf("The triangle of given sides is an isoceles triangle ");
    }
    else if( a!=b && b!=c){
        printf("The triangle of given sides is an scalene triangle ");
    }
    return 0;
}