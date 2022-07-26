/*#include <stdio.h>
int main()
{
    int *arr[4];
    int i = 31, j = 5, k = 19, l = 71, m;
    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;
    for (m = 0; m <= 3; m++)
    {
        printf("%d\t%d\n", (arr[m]), *(arr[m]));
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    static int a[] = {0, 1, 2, 3, 4};
    int *p[] = {a, a + 1, a + 2, a + 3, a + 4};
    printf("%u\t%u\t%d\t\n", p, *p, *p[0], *(*p));
    printf("%d\t%d\t\n", a, *a);
    return 0;
}