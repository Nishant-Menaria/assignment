#include<stdio.h>
void root(int D);
int main(){
    int a,b,c;
    printf("Enter cofficient of x^2 :");
    scanf("%d",&a);
    printf("Enter cofficient of x :");
    scanf("%d",&b);
    printf("Enter constant :");
    scanf("%d",&c);

    int D=b*b-4*a*c;
    root(D);
    return 0;
}

void root(int D){
    switch(D){
        case 0 :{
            printf("The roots of given quadratic equation are real and equal ");
            break;
        }
        default :{
            if(D>0){
                printf("The roots of given quadraic equaton are real and distinct");
            break;
            }
            else{
                printf("the roots are imaginary");
            }
        } 
    }

}