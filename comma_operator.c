#include <stdio.h>
int main()
{
    int a, b;
    a = (3, 2);
    b = (++a, --a);
    printf("%d  %d\n", a, b);
    return 0;
}