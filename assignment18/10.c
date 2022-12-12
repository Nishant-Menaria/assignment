#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    for(int i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    printf("Array entered :\n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int n=sizeof(arr)/sizeof(int);
    int New[n];
    for(int i=0;i<n;i++){
        New[i]=arr[i];
    }
    printf("Printing element Form New array After copying:\n");
    for(int i=0;i<10;i++){
        printf("%d\t",New[i]);
    }
    return 0;
}