#include<stdio.h>
int greatest(int arr[],int n);
void unique(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    unique(arr,10);
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

void unique(int arr[],int n){
    int high=greatest(arr,10);
    ++high;
    int count[high];
    for(int i=0;i<high;i++){
        count[i]=0;
    }
    for(int i=0;i<high;i++){
        ++count[arr[i]];
    }
    printf("The unique values in the given array are :");
    for(int i=0;i<high;i++){
        if(count[arr[i]]==1){
            printf("%d\t",arr[i]);
        }
    }
}