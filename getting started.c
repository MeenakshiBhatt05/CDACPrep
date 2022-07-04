#include <stdio.h>
int main()
{
    float prin, roi, time;
    prin = 250000;
    roi = 7.5;
    time = 7;
    float interest;
    // formulae for simple interest//then find the amount// //
    interest = (prin * roi * time) / 100;
    printf("interest =%f\n", interest / 3);
    float amt = prin + interest;
    printf("amount after %f year =%f\n", time, amt);

    return 0;
}
