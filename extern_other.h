//
#define EXTERN_OTHER 5

static int a = 100;

void display();

void display()
{
    if (EXTERN_OTHER < 5)
        printf("Hi A is:: %d", a);
    else
        printf("Other");
}