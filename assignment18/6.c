#include<stdio.h>
int highest(int arr[],int n);
void Sort(int arr[],int n);
int main(){
    int arr[10];
    int number=1;
    int i;
    for(i=0;i<10;i++){
        printf("ENter %d value:",number);
        scanf("%d",&arr[i]);
        number++;
    }
    printf("Entered array is:\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    Sort(arr,10);
    
    return 0;
}

int highest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

void Sort(int arr[],int n){
    int N=highest(arr,10);
    int count[N],New[10];
    int i;
    for(i=0;i<N;i++){
        count[i]=0;
    }
    for(i=0;i<N;i++){
        count[arr[i]]++;
    }
    for(i=1;i<N;i++){
        count[i-1]+=count[i];
    }
    for(i=10;i>=0;--i){
        New[--count[arr[i]]]=arr[i];
    }
    printf("Array after sorting is:");
    for(i=0;i<10;i++){
        printf("%d\t",New[i]);
    }
}