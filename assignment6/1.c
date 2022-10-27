#include<stdio.h>
int main(){
    char shape;
    int ch;
    float side,l,b,r,a,d,c;
    printf("Enter s for square : r for rectangle : c for circle : t for sum of triangle side :");
    scanf("%c",&shape);
    if(shape=='s' || shape=='r' || shape=='c'){
        printf("Enter 1 for area : 0 for perimeter : ");
        scanf("%d",&ch);
        }
    if(shape=='s'){
        if(ch==1){
            printf("Enter side :");
            scanf("%f",&side);
            printf("Area of square is : %f",side*side);
        }
        else if(ch==0){
            printf("ENter side :");
            scanf("%f",&side);
            printf("Area of square is : %f",4*side);
        }
        else{
            printf("Enter a valid number(1-0");
        }
    }
    else if(shape=='r'){
        if(ch==1){
            printf("Enter lenth :");
            scanf("%f",&l);
            printf("Enter breath :");
            scanf("%f",&b);
            printf("area of rectangle is : %f",l*b);
        }
        else if(ch==0){
            printf("Enter lenth :");
            scanf("%f",&l);
            printf("Enter breath :");
            scanf("%f",&b);
            printf("area of rectangle is : %f",2*(l+b));
        }
        else{
            printf("Enter a valid number(1-0");
        }
    }
    else if(shape=='c'){
        if(ch==1){
            printf("Enter radius :");
            scanf("%f",&r);
            printf("Area of circle is : %f",3.14*r*r);
        }
        else if(ch==0){
            printf("Enter radius :");
            scanf("%f",&r);
            printf("perimeter of circle is : %f",2*3.14*r);
        }
        else{
            printf("Enter a valid number(1-0");
        }
    }
    else if(shape=='t'){
        printf("Enter sides :");
        scanf("%f",&a);
        scanf("%f",&d);
        scanf("%f",&c);
        printf("sum of sides is : %f",a+d+c);
    }
    else{
        printf("Enter a valid character ");
    }
    return 0;
}