#include <stdio.h>
int main()
{
    int i = 3;
    int *j;

    j = &j;
    printf("Address=%d\t Value=%d", j, *j);
    j = &i;
    printf("Address=%d\t Value=%d", j, i);
    return 0;
}