#include <stdio.h>
#include <math.h>
float areaOfTriangle(float l, float b, float h);
int main()
{
    float l, b, h, area1, area2, area3, area4, s;
    printf("\nEnter the dimentions of a Right Angle triangle ");
    scanf("%f %f", &b, &h);
    l = sqrt(b * b + h * h);
    area1 = areaOfTriangle(l, b, h);

    printf("\nEnter the dimentions of a Equilateral triangle ");
    scanf("%f", &l);
    area2 = areaOfTriangle(l, l, l);

    printf("\nEnter the dimentions of a triangle ");
    scanf("%f %f %f", &l, &b, &h);
    area3 = areaOfTriangle(l, b, h);

    printf("\nEnter the dimentions of another triangle ");
    scanf("%f %f %f", &l, &b, &h);
    area4 = areaOfTriangle(l, b, h);

    printf("\n Area of Triangle \n\t1::%f \n\t2::%f \n\t3::%f \n\t4::%f", area1, area2, area3, area4);
    return 0;
}

float areaOfTriangle(float l, float b, float h)
{
    float s, area;
    s = (l + b + h) / 2;
    area = sqrt(s * (s - l) * (s - b) * (s - h));
    return area;
}