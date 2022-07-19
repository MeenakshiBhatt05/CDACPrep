//
#include <stdio.h>
#include <C:\Personal\CDACPrep\extern.c>
#include "extern.h"
#include <extern.h>
#define HLINE for (i = 0; i < 120; i++) \
    {   \
        printf("%c", 196);  \
    } 
#define VLINE for ( i = 0; i <5; i++) \
{ \
    printf("\n%c",179); \
}
   
int main()
{
    int i;
    //extern int a;
    HLINE
    printf("\n%c\tA=%d",179,a);
    VLINE
    return 0;
}