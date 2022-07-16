// TO FIND THE SAVING OF A USER
#include <stdio.h>
#include <math.h>
float sav_annual(float);
float incr_sav(float);
int main()
{
    float sal_annual, saving, yearly_increment;
    printf("enter the annual salary of a user::");
    scanf("%f", &sal_annual);

    printf("ANNUAL SALARY=%f\n", sal_annual);

    saving = sav_annual(sal_annual);
    printf("yearly saving=%f\n", saving);

    yearly_increment = incr_sav(saving);
    printf("yearly saving after five year=%f\n", yearly_increment);

    return 0;
}

float sav_annual(float sal_annual)
{
    float res;
    res = sal_annual * (18.0 / 100);
    return res;
}

float incr_sav(float principle)
{
    float CI, A;

    A = principle * (pow((1 - (12.0 / 100)), 5));
    CI = principle + A;
    return CI;
}