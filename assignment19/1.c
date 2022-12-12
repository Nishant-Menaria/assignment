#include<stdio.h>
int greatest(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    int value=greatest(arr,10);
    printf("The largest value in the given array is :%d",value);
    return 0;
}

int greatest(int arr[],int n){
    int high=arr[0];
    for(int i=1;i<n;i++){
        if(high<arr[i]){
            high=arr[i];
        }
    }
    return high;
}