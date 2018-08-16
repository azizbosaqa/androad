#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,some=0,k ;
    printf("entree les deux nombre :!\n") ;
    scanf("%d%d",&a,&b) ;
    for(k=1;k<b;k++);
         k=k+a ;
         if(k%2==0)
         continue;
         some=k*k;
       printf("resultat est:\n%d",some);



    return 0;
}
