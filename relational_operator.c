// use relational operator

#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 4;
    b = 6;
    c = 3;
    d = 2;
    int e = b == a;
    int f = b < a;
    int g = a > d;
    int h = b <= c;
    int i = a != c;
    printf("%5d%5d%5d%5d%5d\n", e, f, g, h, i);
    return 0;
}