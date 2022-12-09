#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    int sum=0;
    for(int i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    printf("Sum of all the elements in the given array is :%d",sum);
    return 0;
}