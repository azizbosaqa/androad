#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    scanf("%d",&a) ;
    a=a%2 ;
    if(a==0){
        printf("le nombre est paire.") ;
    }else{
        printf("le nombre est impaire .\n");
    }

    return 0;
}
