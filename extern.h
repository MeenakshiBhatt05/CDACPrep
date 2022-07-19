//
static int a = 90;
#include <stdio.h>
void display();
void aj();

// int main()
// {
//     static int a=1;
//     //extern int a;
//      printf("m1=%u\n", &a);
//     display();
//     // printf("m3=%d\n", a);
//     return 0;
// }

void display()
{
    //extern int a;
    printf("m2=%d\n", a);
    aj();
}

void aj(){
    //extern  int a;
    printf("m2=%d\n", a);
}


