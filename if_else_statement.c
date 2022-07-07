#include <stdio.h>
int main()
{
    float bs, hra, da, gs;
    printf("enter the salary of a employee::");
    scanf("%f", &bs);

    if (bs < 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;
    }

    gs = bs + hra + da;
    printf("gross salary of a employee=%f\n", gs);

    return 0;
}