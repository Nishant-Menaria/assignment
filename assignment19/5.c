#include<stdio.h>
void function(int arr[],int n);
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    int size=sizeof(arr)/sizeof(int);
    function(arr,size);
    return 0;
}

void function(int arr[],int n){
    int value;
    printf("Enter the position of the vale till you want to print thr value in reverse :");
    scanf("%d",&value);
    for(int i=value-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}