#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                if (i == 2 && j == 2 && k == 3)
                    break;
                else
                    printf("%d %d %d \n", i, j, k);
            }
            if (i == 2 && j == 2 && k == 3)
                break;
        }
        if (i == 2 && j == 2 && k == 3)
            break;
    }

    printf("Out of loop i=%d j=%d k=%d \n", i, j, k);
    return 0;
}