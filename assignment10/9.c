#include<stdio.h>
int main(){
    int i;
    printf("Testing of various arithmetic operation -2\n");

    i=2/9;
    printf("1. value of integer i is %d\n ",i);

    i=2.0/9;
    printf("2. value of integer i is %d\n ",i);

    i=2/9.0;
    printf("3. value of integer i is %d\n ",i);

    i=2.0/9.0;
    printf("4. value of integer i is %d\n ",i);

    i=9/2;
    printf("5. value of integer i is %d\n ",i);
    
    i=9.0/2;
    printf("6. value of integer i is %d\n ",i);

    i=9/2.0;
    printf("7. value of integer i is %d\n ",i);

    i=9.0/2.0;
    printf("8. value of integer i is %d\n ",i);

    return 0;
}