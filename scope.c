#include <stdio.h>
int main()
{
    int a = 10;
    {
        printf("Address=%u\n", &a);
        int b = 20;
        {
            //int a=130;
            a=150;
            int c=30;
            printf("A=%d \t Address=%u\t C=%d\n", a,&a, c);
        }
        printf("A=%d\t B=%d\n", a, b);
    }
    printf("A=%d\t Address=%u\n", a, &a);
    return 0;
}