//
#include <stdio.h>
int main()
{
    int len, j;
    int sum = 0;
    printf("enter the dimension of an array::");
    scanf("%d", &len);
    int num[len];
    for (j = 0; j <= (len - 1); j++)
    {
        printf("enter %d number::", j + 1);
        scanf("%d", &num[j]);
    }

    for (int k = 0; k <= (len - 1); k++)
    {
        sum = sum + num[k];
    }
    printf("sum=%d\n", sum);
    return 0;
}