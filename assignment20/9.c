#include<stdio.h>
struct birthday{
    int day;
    int month;
    int year;
};
int main(){
    struct birthday b[20];
    int count=1;
    for(int i=0;i<20;i++){
        printf("Enter %d birthday:\n",count);
        printf("Enter day:");
        scanf("%d",&b[i].day);
        printf("Enter month:");
        scanf("%d",&b[i].month);
        printf("Enter year");
        scanf("%d",&b[i].year);
        count++;
    }

    printf("Enter birthdays are:");
    count=1;
    for(int i=0;i<20;i++){
        printf("%d birthday=%d/%d/%d\n",count,b[i].day,b[i].month,b[i].year);
        count++;
    }
    return 0;
}