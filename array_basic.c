#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4};
    printf("Address of A:: %d\n\n", &a);
    int b[4][3] = {
        {00, 11, 22},  // b[0]
        {33, 44, 55},  // b[1]
        {66, 77, 88},  // b[2]
        {99, 00, 69}}; // b[3]

    int *p, *pp;
    int(*r)[3];
    int *s[3];
    int((*t)[3])[3];
    int **q;

    p = &b[1][1];
    // pp = &b[1];
    r = &b[3];
    // *s[0] = &*r;
    // *s[1] = (*r - 1);
    // *s[2] = (*r - 6);

    printf("r=%d \t %d \t %d", *r, r, *(*r + 2));
    return 0;
}