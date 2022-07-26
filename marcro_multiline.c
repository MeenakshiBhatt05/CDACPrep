//
#include <stdio.h>
#pragma message "Compiling " __FILE__ "..."
#pragma startup startfn
#pragma exit stopfn
#define HLINE                 \
    for (i = 0; i < 120; i++) \
    {                         \
        printf("%c", 196);    \
    }
#define VLINE                \
    for (i = 0; i < 5; i++)  \
    {                        \
        printf("\n%c", 179); \
    }

void startfn();
void stopfn();
int main()
{
    int i;
    HLINE
    VLINE
    //#undef HLINE
    HLINE
    return 0;
}

void startfn()
{
    printf("START");
}

void stopfn()
{
    printf("STOP");
}