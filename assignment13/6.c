#include<stdio.h>
void Var(int var);
int main(){
    int var;
    printf("Enter your number : ");
    scanf("%d",&var);

    Var(var);
    return 0;
}

void Var(int var){
    switch(var){
        case 1:{
            printf("good");
            break;
        }
        case 2:{
            printf("better");
            break;
        }
        case 3:{
            printf("best");
            break;
        }
        default:{
            printf("invalid");
        }
    }
}