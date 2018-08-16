#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y ;
    scanf("%f",&x) ;
    y=(x>=0)? 5-x*x : 2*x*x*x ;
    printf("y=%f",y);
    return 0;
}
