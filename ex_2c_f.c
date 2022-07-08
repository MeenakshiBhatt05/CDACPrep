#include <stdio.h>
int main()
{

    int r, s, a;
    printf("enter the age of ram, shyam,ajay::");
    scanf("%d%d%d", &r, &s, &a);
    if (r > s)
    {
        if (s > a)
        {
            printf("ajay is younger than ram and shyam\n");
        }
        else if (a > s)
        {
            if (r > a)
            {
                printf("shyam is younger than ram and ajay\n");
            }
            else
            {
                printf("shyam is younger than ram and ajay\n");
            }
        }
    }
    else if (r < s)
    {
        if (r > a)
        {
            printf("ajay is younger than ram and shyam\n");
        }
        else if (a > r)
        {
            if (a > s)
            {
                printf("ram is younger than shyam and ajay\n");
            }
            else
            {
                printf("ram is younger than shyam and ajay\n");
            }
        }
    }
    else
    {
        printf("default entered\n")
    }
    return 0;
}
