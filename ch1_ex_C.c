#include <stdio.h>
int main()
{
    // a
    float abc = 2.5, big = 2;
    float g = big / 2 + big * 4 / big - big + abc / 3;
    printf("a: g=%f\n", g);

    // b
    int ink = 4, act = 1;
    float tig = 3.2;
    int on = ink * act / 2 + 3 / 2 * act + 2 + tig;
    printf("b: on=%d\n", on);

    // c
    int qui = 4, add = 2, god = 2;
    int s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god;
    printf("c: s=%d\n", s);

    // d
    int a = 4, g2 = 3;
    int s2 = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g2;
    printf("d: s2=%d\n", s2);

    return 0;
}