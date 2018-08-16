#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Hello world!\n");
    float nb,mb ;
    char x;
    printf("donnez deux nombre:\n");
    scanf("%f%f",&nb,&mb) ;
    printf("donnez l'operateur:\n") ;
    scanf("%s",&x) ;
    if(x=='a'){
        printf("resultat est:%f%+f=%f",nb,mb,nb+mb) ;
    }if(x=='s'){
    printf("resultat est:%f-%f=%f",nb,mb,nb-mb) ;
    }if(x=='d'){
    printf("resultat est:%f/%f=%f",nb,mb,nb/mb) ;
    }if(x=='m'){
    printf("resultat est:%f*%f=%f",nb,mb,nb*mb) ;
    }

    return 0;
}
