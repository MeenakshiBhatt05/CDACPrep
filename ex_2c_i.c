#include <stdio.h>
int main()
{
    float l,b,a,p;
    printf("enter the length and bradth of a rectangle::");
    scanf("%f%f",&l,&b);
    //area of a rectangle
    a=l*b;
    //perimeter of a rectangle
    p=2*(l+b);
    if(a>p){
        printf("area is greater than perimeter of a rectangle\n");

    }
    else{
        printf("area is less than perimeter of a rectangle\n");
    }
        return 0;
}