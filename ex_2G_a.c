// year is leap year or not

#include <stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 400 == 0 || year % 100 != 0)
    {
        printf("this year is a leap year\n");
    }
    else
        printf("this year is a non leap year\n");
    return 0;
}