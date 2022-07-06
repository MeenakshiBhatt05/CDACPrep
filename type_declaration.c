#include <stdio.h>
int main()
{
    float a, b, c, d;
    a = 10;
    a = b = c = d = a = a + a;
    printf("%f\t%f\t%f\t%f", a, b, c, d);
    return 0;
}