#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    int i;
    for(i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    int smallest=arr[0];
    for(i=1;i<10;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("The largest element in the given array is : %d",smallest);
    return 0;
}