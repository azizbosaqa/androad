#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float a=0,b=0,c=0,d=0,e=0;
    for(x=100;x>=1;x--)
    {
        a=x%2;
        b=x%3;
        c=x%5;
        d=x%7;
        e=x%11;
        if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
        {
            printf("\nprimt numbers:%d",x);
        }

    }printf("\nprimt numbers:%d",11) ;
            printf("\nprimtS numbers:%d",7) ;
            printf("\nprimtS numbers:%d",5) ;
            printf("\nprimtS numbers:%d",3) ;
            printf("\nprimtS numbers:%d",2) ;

    return 0;
}
