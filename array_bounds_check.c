//
#include <stdio.h>
int main()
{
    int arr[2] = {1, 2};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d=%d\n", i + 1, arr[i]);
    }
    return 0;
}