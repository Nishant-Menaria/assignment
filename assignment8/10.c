#include<stdio.h>
int main(){
    int week;
    printf("Enter week number (1-7) : ");
    scanf("%d",&week);
    switch(week){
        case 1 :{
            printf("MONDAY");
            break;
        }
        case 2 :{
            printf("TUESDAY");
            break;
        }
        case 3:{
            printf("WEDNESDAY");
            break;
        }
        case 4 :{
            printf("THRUSDAY");
            break;
        }
        case 5 :{
            printf("FRIDAY");
            break;
        }
        case 6 :{
            printf("SATURDAY");
            break;
        }
        case 7 :{
            printf("SUNDAY");
            break;
        }
        default : { printf("Enter a number between 1-7");}
         
    }
    return 0;

}