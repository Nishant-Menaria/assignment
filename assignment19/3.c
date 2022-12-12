#include<stdio.h>
void sorting(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    sorting(arr,10);
    printf("Array after sorting: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
void sorting(int arr[],int n){
    int choice,temp;
    printf("Enter your choice :\n1. for sorting in assending order \n2. for sorting in descending order\n=");
    scanf("%d",&choice);
    if(choice==1){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    else if(choice==2){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    else{
        printf("Invalid number.");
    } 
}