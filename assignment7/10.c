#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter sides of triangle :" );
    scanf("%d\n%d\n%d",&x,&y,&z);
    if(x<y+z || y<x+z || z<x+y){
        printf("The give sides of triangle is Valid");
    }
    else {
        printf("The given sides of triangle is not valid");
    }
    return 0;
}
