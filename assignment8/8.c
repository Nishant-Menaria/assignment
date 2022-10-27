#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    int c=b;
    b=a;
    a=c;
    printf("After swaping a = %d and b = %d",a,b );
    return 0;
}