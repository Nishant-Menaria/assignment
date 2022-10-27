#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side of triangle :");
    scanf("%d",&a);
    printf("Enter side of triangle :");
    scanf("%d",&b);
    printf("Enter side of triangle :");
    scanf("%d",&c);
    if(a<b+c || b<a+c || c<a+b){
        printf("The triangle os given sides is valid ");
    }
    else{
        printf(" The triangle of given sides is not valid");
    }
    return 0;
}