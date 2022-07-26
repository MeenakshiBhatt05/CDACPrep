//
#include <stdio.h>
#define EXTERN_OTHER 4

static int a = 100;

void display();
int main()
{
    display();
    return 0;
}

void display()
{
#if EXTERN_OTHER < 5
    printf("Hi A is:: %d", a);
#else
    printf("Other Value");
#endif
}