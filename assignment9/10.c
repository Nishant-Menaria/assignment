#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter your electriciy unit charges :");
    scanf("%f",&a);
    if(a<=50){
        b=a*0.50;
        c=0.20*a*0.50;
        d=b+c;
        printf("additional surcharge of 20 percent is : %f Rs.\n",c);
        printf("total electricity bill is %f Rs. \n",d);
    }
    else if(a>50 && a<=150){
        b=a*0.75;
        c=0.20*a*0.75;
        d=b+c;
        printf("additional surcharge of 20 percent is : %f Rs.\n",c);
        printf("total electricity bill is %f Rs.\n",d);
    }
    else if(a>150 && a<=250){
        b=a*1.20;
        c=0.20*a*1.20;
        d=b+c;
        printf("additional surcharge of 20 percent is : %f Rs.\n",c);
        printf("total electricity bill is %f Rs.",d);
    }
    else if(a>250){
        b=a*1.50;
        c=0.20*a*1.50;
        d=b+c;
        printf("additional surcharge of 20 percent is : %f Rs.\n",c);
        printf("total electricity bill is %f Rs.",d);
    }
    return 0;
}