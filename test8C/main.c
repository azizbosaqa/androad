/* حساب معدل */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4 ;
    double moy ;
    printf("donnez les note de eleve n1 n2 n3 n4\n") ;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4) ;
    moy=(n1+n2+n3+n4)/4 ;
    printf("la moyen est:%f ",moy) ;

    return 0;
}
