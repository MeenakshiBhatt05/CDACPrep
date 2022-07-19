/*#include <stdio.h>
int message();
int main()
{
        message(message());
        return 0;
}
int message(){
    printf("It is a small world after all");
    return 0;
}*/

#include <stdio.h>
int x=21;
extern int _flag;
int main()
{
     int y;
     
    printf("%d%d\n",x,_flag);

        return 0;
}
int y=31;