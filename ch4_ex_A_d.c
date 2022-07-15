#include <stdio.h>
int main()
{
    int k;
    float j = 2.0;

    do
    {
        scanf("%d", &k);
        switch (k)
        {
        case 3:
            printf("\nTrapped");
            break;
        case 0:
            return 0;

        default:
            printf("\nCaught");
        }
    } while (1);
    return 0;
}