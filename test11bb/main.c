#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    char p ;
    printf("donnez l'oprateur:\n") ;
    scanf("%c",&p) ;
    printf("donnez deux nombre:\n");
    scanf("%f%f",&a,&b) ;
    switch (p){
    case '+':printf("resultat est :%f+%f=%f",a,b,a+b) ;
    break ;
    case '-':printf("resultat est :%f-%f=%f",a,b,a-b) ;
    break ;
    case '*':printf("resultat est :%f*%f=%f",a,b,a*b) ;
    break ;
    case '/':printf("resultat est :%f/%f=%f",a,b,a/b) ;
    break ;
    default :printf("error d'operateur");

    }
    return 0;
}
