#include<stdio.h>
int main(){
    int n,count;
    printf("Enter size of your arry: ");
    scanf("%d",&n);

    int arr[n];
    count=1;
    for(int i=0;i<n;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }

    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            printf("The first occured adujecent dulpicate in the given array is :%d",arr[i]);
            return 0;
        }
    }
    printf("There are no adjucent duplicates in the given array:");
    return 0;
}