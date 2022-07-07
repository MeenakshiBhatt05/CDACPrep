#include <stdio.h>
int main()
{
    float ts, gs;
    float com = 0;
    int bs = 2500;
    printf("enter the total sales::");
    scanf("%f %f", &ts, &ts);
    if (ts > 5000)
    {
        com = 300;
    }
    gs = bs + com;
    printf("gross salary=%f, commission=%f\n", gs, com);
    return 0;
}