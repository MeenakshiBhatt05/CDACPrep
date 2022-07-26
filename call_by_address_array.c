#include <stdio.h>
void display(int *);
void show(int **);
int main()
{
    int i;
    int marks[] = {55, 65, 75};
    for (i = 0; i < 3; i++)
    {
        display(&marks[i]);
    }

    return 0;
}
void display(int *n)
{
    show(&n);
}
void show(int **j)
{
    printf("%d\t", **j);
}