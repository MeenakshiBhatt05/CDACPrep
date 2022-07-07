
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, perc;

    printf("enter the marks of five subjects of each student::");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    // m1 = 30;
    // m2 = 40;
    // m3 = 50;
    // m4 = 60;
    // m5 = 70;
    perc = (m1 + m2 + m3 + m4 + m5) / 500 * 100;

    printf("perc=%f\n", perc);
    if (perc >= 60)
        printf("first division\n");
    else if (perc >= 50)
        printf("second division\n");
    else if (perc >= 40)
        printf("third division\n");
    else
        printf("fail \n");

    return 0;
}