#include <stdio.h>
int main()
{

    int a = 4, b = 8, c, d;
    c = a++;
    d = ++b;
    printf("%4d,%5d\t%d%10d\n", a, b, c, d);
    return 0;
}