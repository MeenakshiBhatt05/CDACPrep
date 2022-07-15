/*#include <stdio.h>
int main()
{
    int num, choice;
    printf("enter the number");
    scanf("%d", &num);
    printf("choice the number from 1 to 4:: 1: factorial of a number\n2:prime or not\n3:even or not\n4:exit\n");
    while (1)
    {
        switch (choice)
        {

        case 1:
            int res = 0;
            for (int i = num; num <= 1; num--)
            {
                res = res + num;
                printf("factorial of a %4d is %4d\n", num, res);
            }
            break;

        case 2:
            for (int i = 2; i <= num - 1; i++)
            {
                res = 0;
                if (res = num % i == 0)
                {
                    printf("%d is a prime number", num);
                    break;
                }
                else
                {
                    printf("%d is non prime number", num);
                    break;
                }
            }
        case 3:
        {
            if (num % 2 == 0)
            {
                printf("number is an even number\n");
            }
            else
            {
                printf("nummber is a odd number\n");
            }
            break;
        }
        case 4:
        {
            printf("you choose a choice which exit the program\n");
            return 0;
        }
        }
        printf("pls re-enter the choice util you choose the exit option\n");
    }

    return 0;
}*/

#include <stdio.h>
int main()
{
    int class, grace, num;
    printf("enter the class of a student::");
    scanf("%d", &class);
    printf("enter the number of subjects of a student is failed::");
    scanf("%d", &num);

    switch (class)
    {
    case 1:
    {
        if (num > 3)
        {
            printf("the student will not get any grace\n");
        }
        else if (num <= 3)
        {
            printf("the student will get grace of 5 marks per subject\n");
        }
        break;
    }
    case 2:
    {
        if (num > 2)
        {
            printf("the student will not get any grace\n");
        }
        else if (num <= 2)
        {
            printf("the student will get grace of 4 marks per subject\n");
        }
        break;
    }
    case 3:
    {
        if (num > 1)
        {
            printf("the student will not get any grace\n");
        }
        else if (num == 1)
        {
            printf("the student will get grace of 5 marks per subject\n");
        }
        break;
    }
    }
    return 0;
}