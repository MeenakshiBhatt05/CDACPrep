#include <stdio.h>
void test();
int yoo=3;
int main()
{
        static int a=10;
        test();
        test();
        test();
        printf("%d \n",a);
        return 0;
}

void test(){
    static int a=50;
    printf("%d \t",a++);
}