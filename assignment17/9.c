#include<stdio.h>
void print();
int main(){
    print();
    return 0;
}

void print(){
    int i=1;
    int n;
    while(n!=0){
        printf("Enter %d number :",i);
        scanf("%d",&n);

        i++;
        if(n==0){
            break;
        }
        else if(n%10==0){
            continue;
        }
        else{
            printf("Number is : %d\n",n);
        }
    }
}