#include <stdio.h>
int main()
{
    // use of type-name in a expression
    int a;
    float b;
    // b = 15 / 6;
    float c = (float)5 / 2; // float c = 5.0/2     c=2.500000

    float d = 5 % 2;
    // a = 2.5 / (float)5;
    printf("%-4f %4f", c, d);
    return 0;
}