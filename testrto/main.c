#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,some=0.0 ;
    for(a=4.0;a<=10;a+=0.5)
    some+=a ;
    printf("=%f",some);
    return 0;
}
