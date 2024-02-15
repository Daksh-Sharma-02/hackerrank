#include<stdio.h>
int main(){
    float num1;
    scanf("%f",&num1);
    float num2;
    scanf("%f",&num2);
    int numm1 =(int)num1;
    int numm2 =(int)num2;
    printf("%d %d\n",numm1+numm2,numm1-numm2);

    
    float nnum1;
    scanf("%f",&nnum1);
    float nnum2;
    scanf("%f",&nnum2);
    printf("%.1f %.1f",nnum1+nnum2,nnum1-nnum2);
    return 0;

}
