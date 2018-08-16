#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num=0.0, a=4.0;
    do{
        num+=a ;
        a+=0.5 ;

    }while (a<=10);
    printf("%f\n",num) ;
    return 0;
}
