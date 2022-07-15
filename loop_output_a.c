/*#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
        ;
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 4;
    while (x == 1)
    {
        x = x - 1;
        printf("%d\n", x);
        --x;
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d %d %d\n", x, y, z);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 4, y = 3, z;
    z = x-- - y;
    printf("%d %d %d\n", x, y, z);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    while ('a' < 'b')
        printf("malyalam is palindrome\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i;
    while (i = 10)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    float x = 1.1;
    while (x = 1.1)
    {
        printf("%f\n", x);
        x = x - .1;
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            printf("\n%d %d", x, y);
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
            break;
        else
            printf("%d %d\n", x, y);
        x--;
        y++;
    }
    return 0;
}*/
