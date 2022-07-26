//
#include <stdio.h>
void sum_of_array(char *, int);
int main()
{
    unsigned int meenakshi[2] = {383, 20};
    // int a = 10, b = 20;
    // printf("%d", &meenakshi[0]);
    sum_of_array(meenakshi, 2);
    return 0;
}

void sum_of_array(char *a, int len)
{
    int sum = 0;
    // printf("%d", *a[0]);
    for (int i = 0; i < len; i++)
    {
        sum = sum + *(a + i);
    }
    printf("Sum=%d", sum);
}