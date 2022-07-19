#include <stdio.h>
float sumofthreenumber(float, float, float);
//float sumofthreenumber(float, float);
int main()
{
    float a, b, c, sum;
    printf("enter the value of three number::");
    scanf("%f%f%f", &a, &b, &c);

    sum = sumofthreenumber(a, b, c);
    printf("sum=%f\n", sum);
    return 0;
}
float sumofthreenumber(float c, float b, float a)
{
    float d;
    d = a + b + c;
    return d;
}