#include <stdio.h>
int main()
{

    int num, old = 0, new = 0, sum;
    printf("enter the five digit number::\n");
    scanf("%d", &num);
    sum = 0;
    old = num / 10000;
    sum = num % 10000;
    sum = num;
    sum = num % 10 * 10000;
    new = old + sum;
    sum = num / 10;
    num = sum;
    sum = num / 100 * 10;
    old = sum;
    sum = num % 100;
    sum = num;
    new = old + new;
    sum = num % 10 * 1000;
    new = new + sum;
    sum = num / 10 * 100;
    new = new + sum;
    if (num == new)
    {
        printf("the original value i.e. num is equal to reverse value i.e new\n");
    }
    else
    {
        printf("the original value is not equal to reverse value\n");
    }
    printf("num=%d, new=%d\n", num, new);
    return 0;
}