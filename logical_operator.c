// use  of logical AND, OR ,Not operation
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 4;
    int c = 10;
    int d = a < c && b > c;
    int e = a > c || b < a;
    int f = !(b < c);
    printf("%4d %4d\t%d\n", d, e, f);

    return 0;
}
