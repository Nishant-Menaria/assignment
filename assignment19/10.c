#include<stdio.h>
int main(){
    int n,temp,i,m;
    printf("Enter size of first array:\n");
    scanf("%d",&n);
    printf("Enter size of secound array:\n");
    scanf("%d",&m);

    int arr[n],Arr[n];
    int count=1;
    printf("Enter elemnets of first aray:\n");
    for(i=0;i<n;i++){
        printf("Enter %d element:",count);
        scanf("%d",&arr[i]);
        count++;
    }
    printf("Enter elements of secound array:\n");
    count=1;
    for(i=0;i<m;i++){
        printf("Enter %d element:",count);
        scanf("%d",&Arr[i]);
        count++;
    }
    int merge[n+m];
    i=0;
    int k,j;
    k=j=0;
    while(k!=n+m){
        if(arr[i]<Arr[j]){
            merge[k]=arr[i];
            i++;
        }
        else{
            merge[k]=Arr[j];
            j++;
        }
        k++;
    }
    printf("Array after merging :\n");
    for(int i=0;i<n+m;i++){
        printf("%d\t",merge[i]);
    }
    return 0;
}
