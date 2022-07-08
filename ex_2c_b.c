#include <stdio.h>
int main()
{
    int num;
    printf("enter a integer number\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the given number  %d is even\n", num);
    }
    else
    {
        printf("the given number %d is odd \n", num);
    }
    return 0;
}