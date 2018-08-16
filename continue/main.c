/*first self answere*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,some=0,k=1,n=0,moy=0 ;
    printf("entree les deux nombre :!\n") ;
    scanf("%d%d",&a,&b) ;
    n=k+a ;
    while(n<b)
    {   printf("FN :%d!\n",n);
        if(n%2!=0)
        {   printf("SN :%d\n",n);
            some=n*n;
            moy=moy+some ;
        }
        n++ ;
    }
    printf("resultat est:\n%d",moy);
    return 0;
}
