// to fiind profit and loss as weel as how much profit he incurred
#include <stdio.h>
int main()
{
    float cp, sp, diff;
    printf("enter the cost price and selling price of an item::");
    scanf("%f%f", &cp, &sp);
    diff = sp - cp;
    if (sp > cp)
    {
        printf("seller has made profit\n");
        printf("profit = %f\n", diff);
    }
    else
    {
        printf("seller has made loss\n");
        printf("loss = %f\n", diff);
    }
    return 0;
}