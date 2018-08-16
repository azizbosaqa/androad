#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;
    printf("entre le nombre x\n :") ;
    scanf("%d",&x) ;
    switch (x){
    case -3:y=3*x-7;
        printf("%dU",y);
    break ;
    case 2:y=5*x*x ;
    case 5:y=5*x*x ;
        printf("%d",y) ;
    break ;
    case -4:y=x-4*x*x*x ;
    case 4 :y=x-4*x*x*x ;
        printf("%d",y) ;
    break ;
    default :printf("error data out the rang");
    }
    return 0;
}
