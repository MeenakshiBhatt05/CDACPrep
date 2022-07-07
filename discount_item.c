#include <stdio.h>
int main(){

    float qty,rate,dis, ts;
    dis=0; //discount in percentage
    printf("enter the quantity and rate of a item::");
    scanf("%f%f",&qty,&rate);
   /* printf("enter the rate of a item::");
    scanf("%f",&rate);*/

    if(qty>1000)
    {
        dis=10;
    }
    
    ts=((qty*rate)-(qty*rate*dis/100));

    printf("total expenses :: %f\n",ts);
    return 0;
}