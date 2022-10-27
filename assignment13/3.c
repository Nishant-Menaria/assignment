#include<stdio.h>
void burger();
void frenchfries();
void pizza();
void sandwiches();
int main(){
    int n;
    printf("1.burger\n2.french fries\n3.pizza\n4.sandwiches\n5.enter a valid choice:");
    scanf("%d",&n);

    switch(n){
        case 1:{
            burger();
            break;
        }
        case 2:{
            frenchfries();
            break;
        }
        case 3:{
            pizza();
            break;
        }
        case 5:{
            sandwiches();
            break;
        }
        default :{
            printf("enter a valid choice");
        }
    }
    return 0;
}

void burger(){
    int n;
    printf("Enter quantity :");
    scanf("%d",&n);
    printf("total charge =  Rs.%d",200*n);
}

void frenchfries(){
    int n;
    printf("Enter quantity :");
    scanf("%d",&n);
    printf("total charge =  Rs.%d",50*n);
}

void pizza(){
    int n;
    printf("Enter quantity :");
    scanf("%d",&n);
    printf("total charge =  Rs.%d",500*n);
}

void sandwiches(){
    int n;
    printf("Enter quantity :");
    scanf("%d",&n);
    printf("total charge =  Rs.%d",150*n);
}