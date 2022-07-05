#include <stdio.h>
int main()
{
    short a = 12, b = 5;
    short c = a & b;
    short d = a | b;
    short f = a ^ b;
    short g = ~a;
    short e = b << 2;
    short h = b >> 1;
    printf("%d\t%d\t%d\t%10x%5d%6d\n", c, d, f, g, e, h);
    return 0;
}