#include<stdio.h>
int main(){
    int arr[10];
    int number=1;
    int i,j,temp;
    int new[10];
    for(i=0;i<10;i++){
        printf("ENter %d value:",number);
        scanf("%d",&arr[i]);
        number++;
    }
    printf("Entered Array :\n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        new[i]=arr[i];
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(new[i]>=new[j]){
                temp=new[i];
                new[i]=new[j];
                new[j]=temp;
            }
        }
    }
    printf("The secound Largest element in the given array is :%d",new[8]);
    return 0;
}