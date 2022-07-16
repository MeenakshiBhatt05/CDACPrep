// swap two program by using function
#include <stdio.h>
void swap_num(int *, int *);
int main()
{
    int a = 10, b = 20;
    // int *l=&a;
    swap_num(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void swap_num(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("%d%d\n", x, y);
    printf("%d%d\n", *x, *y);
    swap_num(x, y);
}