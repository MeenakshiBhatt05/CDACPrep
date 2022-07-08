#include <stdio.h>
int main()
{
    float a1, a2, a3, soa;
    printf("enter the three angles of a triangle::");
    scanf("%f%f%f", &a1, &a2, &a3);
    soa = a1 + a2 + a3;
    if (soa == 180)
    {
        printf("the triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
    return 0;
}