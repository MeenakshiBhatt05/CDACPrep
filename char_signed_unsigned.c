#include <stdio.h>
int main()
{
        signed char c;
        for(int i=0;i<255;i++){
            c=i;
            printf("%d=%c\n",c,c);
        }
        return 0;
}