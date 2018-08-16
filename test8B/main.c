/* Programe de cal de vol est surf */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lar,lon ;
    double per , surf  ;
    printf("entre la largeure:\n") ;
    scanf("%f",&lar) ;
    printf("entre la longueur:\n") ;
    scanf("%f",&lon) ;
    surf=lar*lon ;
    per=(lar+lon)*2 ;
    printf("la surface est: Surf=%f",surf) ;
    printf("\nle perimètre est: per=%f",per) ;
    printf("\nfini l'opration ") ;
    return 0;
}
