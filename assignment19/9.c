#include<stdio.h>
void merge(int arr[],int Arr[],int n,int m);
int main(){
    int n,m;
    printf("Enter teh size of your first array:");
    scanf("%d",&n);
    printf("Enter teh size of your secound array:");
    scanf("%d",&m);
    int arr[n],Arr[m];
    int count=1;
    printf("Enter elemenst of first array\n");
    for(int i=0;i<n;i++){
        printf("Enter %d value:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    count=1;
    printf("Enter elements of secound array\n");
    for(int i=0;i<m;i++){
        printf("Enter %d value:",count);
        scanf("%d",&Arr[i]);
        count++;
    }
    merge(arr,Arr,n,m);
    return 0;
}

void merge(int arr[],int Arr[],int n,int m){
    int merge[n+m];
    for(int i=0;i<n;i++){
        merge[i]=arr[i];
    }
    int j=0;
    for(int i=n;i<n+m;i++){
        merge[i]=Arr[j];
        j++;
    }

    printf("Printing array after merging both array :");
    for(int i=0;i<n+m;i++){
        printf("%d\t",merge[i]);
    }
    
}