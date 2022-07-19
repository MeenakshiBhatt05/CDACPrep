#include <stdio.h>
int* fun();
int main()
{
    int* j;
    
    printf("\nAddress=%u",fun(fun()));
    printf("\n%d",*j);
        return 0;
}

int* fun(){
    static int k=10;
    printf("%u",&k);
    return &k;
}