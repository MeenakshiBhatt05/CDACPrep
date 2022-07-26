#include <stdio.h>
int main()
{
    int a[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    int *p[2];

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d \t", *(*(a + 2) + j));
        }
    }

    // printf("Address=%d \nNext Address=%d", j, j + 1);
    return 0;
}