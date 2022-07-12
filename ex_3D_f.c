/*#include <stdio.h>
int main()
{
    int i = 1;
    while (1)
    {
        i++;
        printf("%d\n", i);
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i;
    for (;;)
        ;
    printf("%d\n", i);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int true = 0, false;
    while (true)
    {
        false = 1;
        printf("%d%5d\n", true, false);
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int y, x = 0;
    do
    {
        y = x;
        printf("%d%d\n", x, y);
    } while (x == 0);
    return 0;
}