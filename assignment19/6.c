#include<stdio.h>
void count(int arr[],int n);
int greatest(int arr[],int n);
int main(){
    int arr[10];
    int number=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",number);
        scanf("%d",&arr[i]);
        number++;
    }
    count(arr,10);
    return 0;
}

void count(int arr[],int n){
    int size=greatest(arr,n);
    int count[size],check;
    for(int i=0;i<size;i++){
        count[i]=0;
    }
    for(int i=0;i<size;i++){
        ++count[arr[i]];
    }                                                                                                                                                                                                                                                                                                                                             
    printf("Enter the number whose frequency you want to check: ");
    scanf("%d",&check);
    printf("frequency of %d in the given array is :%d",check,count[check]);
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