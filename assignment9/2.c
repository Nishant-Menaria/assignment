#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of first subject :");
    scanf("%d",&sub1);
    printf("enter marks of secound subject :");
    scanf("%d",&sub2);
    printf("enter marks of third subject :");
    scanf("%d",&sub3);
    printf("enter marks of fourth subject :");
    scanf("%d",&sub4);
    printf("enter marks of fifth subject :");
    scanf("%d",&sub5);
    if(sub1>=33 ||sub2>=33 || sub3>=33 ||sub4>=33 || sub5>=33){
        printf("PASSED\n");}
    else if(sub1<33 || sub2<33 || sub3<33 || sub4<33 || sub5<33 )
        printf("FAIL");
    }
    int sum=sub1+sub2+sub3+sub4+sub5;
    printf("sum of marks in all sun is %d ",sum);
    return 0;
}
