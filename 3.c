#include<stdio.h>
int main(){
    int arr[10];
    int count=1;
    int i;
    int Esum,Osum;
    Esum=Osum=0;
    for(i=0;i<10;i++){
        printf("Enter %d value :",count);
        scanf("%d",&arr[i]);
        count++;
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            Esum+=arr[i];
        }
        else{
            Osum+=arr[i];
        }
    }
    printf("Sum of all the even elements of at array if :%d\nsum of all the odd elements in the array if :%d ",Esum,Osum);
    return 0;
}