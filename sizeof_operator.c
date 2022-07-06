#include <stdio.h>
int main()
{

    int a = (float)4.8 / 2;
    printf("%4u,%5u,%3u\n", sizeof(int), sizeof(a), sizeof((float)4.8 / 2));
    return 0;
}