//a
/*#include <stdio.h>
int main()
{
    int i;
        for(i=0;i<=50000;i++)
    printf("%d\n",i);
        return 0;
}*/

//b
/*#include <stdio.h>
int main()
{
    float a= 13.5;
    double b =13.5;
    printf("%f%lf\n",a,b);
        return 0;
}*/

//c
/*#include <stdio.h>
  int i=0;
void val();
int main()
{
    printf("main's i=%d\n",i);
    i++;
    val();
    printf("main's i=%d\n",i);
    val();
    
        return 0;
}

void val()
{
   i=100;
    printf("val's i=%d\n",i);
    i++;
}*/

/*#include <stdio.h>
int f (int);
int g (int);
int main()
{
    int x,y,s=2;
    s*=3;
    y=f(s);
    x=g(s);
    printf("%4d%5d%6d\n",s,y,x);
        return 0;
}
int t=8;
int f(int a)
{
    a+=-5;
    t-=4;
    return(a+t);
}

int g(int a)
{
    a=1;
    t+=a;
    return(a+t);
    
}*/

//e
/*#include <stdio.h>
int main()
{
    static int count=5;
    printf("count=%d\n",count--);
    if(count!=0)
    main();

        return 0;
}*/
//f
/*#include <stdio.h>
int g(int);
int main()
{
    int i,j;
    for (i=1;i<5;i++)
    {
        j=g(i);
        printf("%d\n",j);
    }
        return 0;
}
int g (int x)
{
    static int v=1;
    int b=3;
    v+=x;
    return (v+x+b);
}*/

//g
/*#include <stdio.h>
float x=4.5;
float f(float);
int main()
{
    float y;
    x*=2.0;
    y=f(x);
    printf("%f%f\n",x,y);

        return 0;
}

float f (float a){
    a+=1.3;
    x-=4.5;
    return(a+x);
}*/

//h
/*#include <stdio.h>
void func();
int main()
{
    func();
    func();
        return 0;
}
void func()
{
    auto int i=0;
    register int j=0;
    static int k=0;
    i++;j++;k++;
    printf("%d%d%d\n",i,j,k);
}*/
//i
/*#include <stdio.h>
int x=10;
int main()
{
    int x=20;{
        int x=30;
        printf("%d\n",x);

    }
    printf("%d\n",x);
        return 0;
}*/

// error find out
//a
/*#include <stdio.h>
int main()
{
    long num;
    num=2;
    printf("%ld\n",num);
        return 0;
}*/
//b
/*#include <stdio.h>
int main()
{
    char ch=200;
    printf("%d\n",ch);
    return 0;
}*/

//c
/*#include <stdio.h>
int main()
{
    unsigned a=25;
    long unsigned b=25l;
    printf("%lu,%u\n",a,b);
        return 0;
}*/

//d
/*#include <stdio.h>
int main()
{
    long float a=25.9345e454;
    unsigned double b=25;
    printf("%lf%d\n",a,b);
    return 0;
}*/
//e
/*#include <stdio.h>
int main()
{
    float a=25.345;
    float *b;
    b=&a;
    printf("%f\t%u\n",a,b);
        return 0;
}*/
//f
#include <stdio.h>

int main()
{

        return 0;
}
