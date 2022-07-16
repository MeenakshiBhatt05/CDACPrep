// print the reverse numbers using recurrsion
#include <stdio.h>
int rev(int a);

int main()
{
    int num, NUM;
    printf("enter any natural number::");
    // scanf("%d", &num);
    num = 4;
    NUM = rev(num);
    printf("Sum=%d", NUM);
    return 0;
}

int rev(int num)
{
    int sum = 1;
    if (num > 1)
    {

        printf("%d", num);
        sum = num * rev(num - 1); // 17+16+
    }
    return sum;
}
