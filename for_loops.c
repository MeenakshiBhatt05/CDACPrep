#include <stdio.h>
int main()
{
    int j = 0;
    for (;;)
    {
        if (j++ == 10)
            break;
        printf("%d", j);
    }

    return 0;
}