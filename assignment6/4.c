#include<stdio.h>
int main(){
    char a;
    printf("For CM enter c : m for MM :  i for inch :");
    scanf("%c",&a);
    int b;
    printf("Enter the distance between two cities in KM :");
    scanf("%d",&b);
    if(a=='c'){
        printf("The distance between the two cities in CM is : %d ",b*100);
    }
    else if(a=='m'){
        printf("The distance between the two cities in M is : %d ",b*1000000);
    }
    else if(a=='i'){
        printf("The distance between the two cities in inches is : %d ",b*39370);
    }
    else{
        printf("enter a valid character ");
    }
    return 0 ;
}