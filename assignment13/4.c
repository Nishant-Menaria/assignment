#include<stdio.h>
void week(int n);
int main(){
    int n;
    printf("Enter the day as a number :");
    scanf("%d",&n);

    week(n);
    return 0;
}

void week(int n){
    switch(n){
        case 1:{
            printf("Namasta");
            break;
        }
        case 2:{
            printf("Hello");
            break;
        }
        case 3:{
            printf("hola");
            break;
        }
        case 4:{
            printf("bonjour");
            break;
        }
        case 5:{
            printf("lonnichiwa");
            break;
        }
        case 6:{
            printf("salve");
            break;
        }
        case 7:{
            printf("guten tag");
            break;
        }
        default :{
            printf("Enter a valid number");
        }
    }
}