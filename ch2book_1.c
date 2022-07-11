/*#include <stdio.h>
int main()
{
    char ch = 65;
    int x = 9;
    printf("%d %4d\n", sizeof(ch), sizeof('A'));
    printf("%d %4d\n", sizeof(65), sizeof(++x));
    printf("%d\n", x);

    return 0;
}*/

/*nt main()
{
    printf("%d\n", '\n' - '\r');
    printf("%d,%4d\n", '\n', '\r');
    printf("%d%4d%4d%4d%4d%4d%4d", '\b', '\t', '\f', '\a', '\'', '\"', '\\');

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 300;
    printf("%u", x * x / x);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a = 3, b = 6;
    printf("%d", a = b);
    printf("%d", a == b);
    printf("%d", a != b);
    printf("%d", a = !b);

    return 0;
}*/

#include <stdio.h>
int main()
{
    int a = -10, b = 3, c = 0, d;
    d = a++ || ++b && c++;
    printf("%d%5d%4d%4d", a, b, c, d);
    return 0;
}