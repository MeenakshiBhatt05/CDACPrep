#include <stdio.h>
int main()
{
    int a;
    a = 12;
    float b = 5;
    b = a = b = a / b;
    printf("%f, %f\n", b, a / 1.0);
    return 0;
}
