// to calculate overtime

/*#include <stdio.h>
int main()
{
    int overtime;
    int i = 1;
    while (i <= 10)
    {
        overtime = 12 * 40;
        printf("%d\n", overtime);
        i++;
    }

    return 0;
}*/

// to factorial of a num

/*#include <stdio.h>
    int main()
    {
        int num, i = 1;
        printf("enter the number::");
        scanf("%d", &num);
        int fact = num;
        while (i <= (num - 1))
        {
            // fact = num;
            fact = fact * i;
            i++;
            printf("%d\n", fact);
        }

        return 0;
    }*/

// to find the value of one numberraised to the power of another

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, i;
    printf("enter the two number\n");
    scanf("%d%d", &num, &i);
    int res = pow(num, i);
    printf("%d\n", res);
    return 0;
}*/

// to print all the ascii value and their equivalent characters
/*#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 255)
    {
        printf("the ascii value of %c is %d\n", i, i);
        i++;
    }

    return 0;
}*/

// to print all the armstrong number from 1 to 500
/*#include <stdio.h>
int main()
{
    int i, num;
    printf("enter the number between 1 and 500::");
    scanf("%d", &num);
    int num1, num2, num3, num4, armstrng = 0;
    num1 = num / 100;
    num2 = num % 10;
    num4 = num / 10;
    num3 = num4 % 10;
    int res = 0;
    res = (num1 * num1 * num1);
    printf("%d\n", res);
    armstrng = (num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3);
    if (num == armstrng)
    {
        printf("%d is a armstrong number\n", num);
    }
    else
    {
        printf("%d is not a armstrong number\n", num);
    }

    return 0;
}*/