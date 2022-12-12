#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    int i,n;
    for(i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    printf("Entered array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the position where you want to print elemnet in reverse order :");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}