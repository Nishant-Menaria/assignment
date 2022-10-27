#include<stdio.h>
void month();
int main(){
    month();
    return 0;
}

void month(){
    int n;
    printf("Enter the number of your month :");
    scanf("%d",&n);

    switch(n){
        case 1 :{
            printf("There are 31 days in january");
            break;
        }
        case 2 :{
            printf("There are 28 days in february in normal year and 29 day in leap year");
            break;
        }
        case 3 :{
            printf("There are 31 days in march");
            break;
        }
        case 4 :{
            printf("There are 30 days in april");
            break;
        }
        case 5 :{
            printf("There are 31 days in may");
            break;
        }
        case 6 :{
            printf("There are 30 days in june");
            break;
        }
        case 7 :{
            printf("There are 31 days in july");
            break;
        }
        case 8 :{
            printf("There are 31 days in august");
            break;
        }
        case 9 :{
            printf("There are 30 days in septumber");
            break;
        }
        case 10 :{
            printf("There are 31 days in october");
            break;
        }
        case 11 :{
            printf("There are 30 days in november");
            break;
        }
        case 12 :{
            printf("There are 31 days in december");
            break;
        }
    }
}