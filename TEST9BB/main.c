#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y ;
    scanf("%f",&x);
    if(x>0){
        y=5-x*x ;
    }else {
    y=2*x*x*x ;
    }
    printf("y=%f",y) ;
    return 0;
}
