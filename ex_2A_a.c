/*#include <stdio.h>
int main()
{
    int a = 300, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    printf("%d%5d\n", b, c);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    printf("%d%4d\n", b, c);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    if (x == y)
        printf("%d%4d\n", x, y);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 3, y = 5;
    if (x == 3)
        printf("%d\n", x);
    else
        printf("%d\n", y);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 3;
    float y = 3.0;
    if (x == y)
        printf("x and y are equal\n");
    else
        printf("x and y are not equal\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    printf("x=%d,y=%d,z=%d\n", x, y, z);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int k = 35;
    printf("%4d%5d%6d\n", k == 35, k = 50, k > 40);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i = 65;
    char j = 'A';
    if (i == j)
        printf("C is WOW\n");
    else
        printf("C IS A HEADACHE\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a = 5, b, c;
    b = a = 15;
    c = a < 15;
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    return 0;
}*/

// #include <stdio.h>
// int main()
// {
//     int x = 15;
//     printf("%d%4d%4d\n", x != 15, x = 20, x < 20);

//     return 0;
// }

// find out error
/*#include <stdio.h>
int main()
{
    float a = 12.25, b = 12.52;
    if (a = b)
    {
        printf("\na and b are equal");
    }

    return 0; // no error
}*/

/*#include <stdio.h>
int main()
{
    int j = 10, k = 12;
    if (k >= j)
    {
        {
            k = j;
            j = k;
            printf("%d%d\n", j, k);
        }
    }
    return 0;  // no error
}*/

/*#include <stdio.h>
int main()
{
    if ('X' < 'x')
        printf("ascii value of X is smaller than that of x\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x=10;
    if(x>=2)then // this is error
        return 0;
}*/

// #include <stdio.h>
// int main()
// {
//     int x = 10, y = 15;
//     if (x % 2 = y % 3)
//         printf("carpathians\n");
//     return 0;
//     }

#include <stdio.h>
int main()
{
    int x = 30, y = 40;
    if (x == y)
        printf("x is equal to y\n");
    else if (x > y)
        printf("x is greater than y\n");
    else if (x < y)
        printf("x is smaller than y\n");
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     if (a > b)
//         ; // semicolon error

//     printf("this is a game\n");
//     else printf("you have to play it\n");
//     return 0;
// }