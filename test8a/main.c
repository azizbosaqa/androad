/* Calcule de surface est volume */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI=3.1415926 ;
    float r=5.2 ;
    double surface ,volume ;
    surface=PI*r*2 ;
    printf("la surface de cerle est =%f\n",surface) ;
    volume=PI*r*r ;
    printf("le volume de cercle est =%f\n",volume) ;
    return 0;
}
