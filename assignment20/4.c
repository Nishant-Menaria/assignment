#include<stdio.h>
struct birthday{
    int day;
    int month;
    int year;
};
int main(){
    struct birthday B1,B2,B3,B4,B5;
    printf("Enter first Birth Detail:\n");
    printf("Enter Day:");
    scanf("%d",&B1.day);
    printf("Enter Month:");
    scanf("%d",&B1.month);
    printf("Enter year:");
    scanf("%d",&B1.year);

    printf("Enter secound Birth Detail:\n");
    printf("Enter Day:");
    scanf("%d",&B2.day);
    printf("Enter Month:");
    scanf("%d",&B2.month);
    printf("Enter year:");
    scanf("%d",&B2.year);

    printf("Enter Third Birth Detail:\n");
    printf("Enter Day:");
    scanf("%d",&B3.day);
    printf("Enter Month:");
    scanf("%d",&B3.month);
    printf("Enter year:");
    scanf("%d",&B3.year);

    printf("Enter fourth Birth Detail:\n");
    printf("Enter Day:");
    scanf("%d",&B4.day);
    printf("Enter Month:");
    scanf("%d",&B4.month);
    printf("Enter year:");
    scanf("%d",&B4.year);

    printf("Enter fifth Birth Detail:\n");
    printf("Enter Day:");
    scanf("%d",&B5.day);
    printf("Enter Month:");
    scanf("%d",&B5.month);
    printf("Enter year:");
    scanf("%d",&B5.year);
    
    printf("Entered birthdays are:\n");
    printf("First Birthday:%d/%d/%d\n",B1.day,B1.month,B1.year);
    printf("secound Birthday:%d/%d/%d\n",B2.day,B2.month,B2.year);
    printf("third Birthday:%d/%d/%d\n",B3.day,B3.month,B3.year);
    printf("Fourth Birthday:%d/%d/%d\n",B4.day,B4.month,B4.year);
    printf("Fifth Birthday:%d/%d/%d\n",B5.day,B5.month,B5.year);
    return 0;
}