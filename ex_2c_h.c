#include <stdio.h>
int main()
{
    int num;
    printf("enter the number::");
    scanf("%d", &num);
    if (num < 0)
    {
        num = num * (-1);
        printf("absolute value of a number is %d\n", num);
    }
    else
    {
        printf("absolute number of a value is %d \n", num);
    }

    return 0;
}