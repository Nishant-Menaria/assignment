#include<stdio.h>
int smallest(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    int value=smallest(arr,10);
    printf("The smallest value of the given arrray is:%d",value);
    return 0;
}

int smallest(int arr[],int n){
    int small=arr[0];
    for(int i=1;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    return small;
}