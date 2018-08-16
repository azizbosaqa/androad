#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,a,b=0,s=0,moy=0 ;
    char sex ;
    float n1,n2,n3,some=0,max=0 ;
    printf("how money student in class:") ;
    scanf("%d",&a) ;
    {
    printf("entree id:\n") ;
    scanf("%d",&id);
    if(id<0)
    {printf("hi");
        exit(3) ;
    }
    do {
    printf("entree sex f or h:\n") ;
    scanf("%s",&sex) ;
    switch (sex)
    case 'F':
        {
        ++s;
    default :printf("it's hoome") ;
        }
    printf("entree les note:\n") ;
    scanf("%f%f%f",&n1,&n2,&n3) ;
    some=n1+n2+n3 ;
    moy=some/3 ;
    printf("%d",moy);
    if(moy>moy)
    {
        max=moy ;
    }b++ ;
    }while(b<a) ;
    printf("les fille:") ;
    printf("%c:\n",s) ;
    printf("best student:") ;
    printf("%f\n",max) ;

switch (moy)
    {
        case moy<50 :printf("!fail!") ;
        break ;
        case moy>=50 :
        case moy<60 :printf("!admit table!") ;
        break ;
        case moy>=60 :
        case moy<70 :printf("!medial!") ;
        break ;
        case moy>=70 :
        case moy<80 :printf("!good!") ;
        break ;
        case moy>=80 :
        case moy<90 :printf("!verygood!") ;
        break ;
        case moy>=90 :
        case moy<100 :printf("!excelent!") ;
        break ;
    }


    return 0;
}
