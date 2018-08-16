/*DO..WHILE */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    {int n,c ;
    float num,some,moy ;
    some=0 ;
    printf("donnez numro de la list:") ;
    scanf("%d",&n);
    printf("entree les donnee:\n");
    c=0 ;
    do
        {
        scanf("%f",&num);
        some+=num ;
        c++ ;
        }   while(c<n);
     moy=some/n ;
     printf("la motenest:%f",moy);

    return 0;
    }
}
