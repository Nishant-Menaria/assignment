#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    float sum=0;
    for(int i=0;i<10;i++){
        printf("enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    printf("Average of the elements in the array is :%f",sum/10);
    return 0;
}