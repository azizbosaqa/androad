/*while */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int da,count ;
    float num,some,moy ;
    some=0;
    printf("enter le nomber:\n");
    scanf("%d",&da) ;
    printf("the date is\n") ;
    count=0;
    while(count<da)
    {
    scanf("%f",&num) ;
    some=some+num ;
    count++ ;
    }
    moy=some/da;
    printf("la moyenest:\t%f",moy) ;
    return 0;
}
