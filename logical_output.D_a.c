// find out the value of an expression
/*#include <stdio.h>
int main()
{
    int a = 10, b = 12, c = 0;
    int d = a != 6 && b > 5;
    int e = a == 9 || b < 3;
    int f = !(a < 10);
    int g = !(a > 5 && c);
    int h = 5 && c != 8 || !c;
    printf("%d%4d%4d%4d%4d\n", d, e, f, g, h);

    return 0;
}*/
// output of the following programs
/*#include <stdio.h>
int main()
{
    int i = 4, z = 12;
    if (i = 5 || z > 50)
        printf("dean of students affairs\n");
    else
        printf("dosa\n");

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = 4, z = 12;
    if (i = 5 && z > 5)
        printf("let us c\n");
    else
        printf("wish c was free\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;
    printf("w=%d,x=%d,y=%d,z=%d\n", w, x, y, z);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = 4, j = -1, k = 0, y, z;
    y = i + 5 && j + 1 || k + 2;
    z = i + 5 || j + 1 && k + 2;
    printf("y=%d,z=%d\n", y, z);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = -3;
    int j = 3;
    if (!i + !j * 1)
        printf("massaro\n");
    else
        printf("bennarivo\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a = 40;
    if (a > 40 && a < 45)
        printf("a is greater than 40 and less than 45\n");
    else
        printf("%d\n", a);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int p = 8, q = 20;
    if (p == 5 && q > 5)
        printf("why not c\n");
    else
        printf("definitely c!\n");

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int i = -1, j = 1, k, l;
    k = i && j;
    l = i || j;
    printf("%d%d\n", l, j);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 20, y = 40, z = 45;
    if (x > y && x > z)
        printf("x is big\n");
    else if (y > x && y > z)
        printf("y is big\n");
    else if (z > x && z > y)
        printf("z is big\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = -1, j = 1, k, l;
    k = !i && j;
    l = !i || j;
    printf("%d%d\n", i, j);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int j = 4, k;
    k = !5 && j;
    printf("%d\n", k);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i = 10, j = 10;
    if (i && j == 10)
        printf("have a nice day\n");
    return 0;
}