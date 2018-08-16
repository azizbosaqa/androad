/*salaire brut net et montant porsentage */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salbrut ;
    float mon,por,a,b ;
    printf("donnez ton salairebrut:\n");
    scanf("%f",&salbrut) ;
    printf("montant des vendu:\n");
    scanf("%f",&mon) ;
    a=salbrut*3;
    b=salbrut*5;
    if (mon<=a){
        por=2*salbrut/100 ;
        printf("le salaire net+2 est: %f+%f=%f",salbrut,por,salbrut+por);
    }if(b>mon&&a<mon){
        por=3*salbrut/100 ;
    printf("le salaire net+3 est: %f+%f=%f",salbrut,por,salbrut+por);
    }if(mon>b){
    por=5*salbrut/100;
    printf("le salaire net+5 est: %f+%f=%f",salbrut,por,salbrut+por);

    }


    return 0;
}
