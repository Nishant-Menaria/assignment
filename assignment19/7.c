#include<stdio.h>
int duplicate(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    int dup=duplicate(arr,10);
    printf("There are %d duplicate value in the given array.",dup);
    return 0;
}

int duplicate(int arr[],int n){
    int dup=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup++;
            }
        }
    }
    return dup;
}