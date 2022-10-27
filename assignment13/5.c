#include<stdio.h>
void isotri(int a);
void rigtri(int a);
void eqitri(int a); 
int main(){
    int n,a;
    printf("1.Check whether a given set of three numbers are length of an isosceles triangle or not\n");
    printf("2.Check whether a given set of three numbers are length of an right angled triangle or not\n");
    printf("3.Check whether a given set of three numbers are length of an equilateral triangle or not\n");
    printf("4.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&n);
    if(n==1 || n==2 || n==3 ){
        printf("Enter set of side:");
        scanf("%d",&a);
    }
    
    switch(n){
        case 1:{
            isotri(a);
            break;
        }
        case 2:{
            rigtri(a);
            break;
        }
        case 3:{
            eqitri(a);
            break;
        }
        case 4:{
            break;
        }
        default:{printf("enter a valid number");}
    }
    return 0;
}

void isotri(int a){
    int once=a%10;
    int tens=once%10;
    int hund=tens%10;
    if(once==tens || tens==hund || hund==once){
        printf("the given set of side is a isosceles triangle");
    }
    else{
        printf("the given set of side is a not isosceles triangle");
    }
}

void rigtri(int a){
    int once=a%10;
    int once2=once*once;
    int tens=once%10;
    int tens2=tens*tens;
    int hund=tens%10;
    int hund2=hund*hund;

    if(hund2==tens2+once2 || tens2==hund2+once2 || once2==hund2+tens2){
        printf("The given set of sides is an right angles triangle ");
    }
    else{
     printf("The given set of sides is not a right angles triangle ");   
    }  
}

void eqitri(int a){
    int once=a%10;
    int tens=once%10;
    int hund=tens%10;

    if(once==tens && tens==hund){
        printf("The given set of sides is an eqilateral triangle ");
    }
    else{
        printf("The given set of sides is not an eqilateral triangle ");        
    }
}