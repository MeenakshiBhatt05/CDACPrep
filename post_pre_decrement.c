#include <stdio.h>
int main()
{
    int a = 6, b = 9, c, d;
    c = --a;
    d = b--;
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
}