#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c ;
    float r,s,t ;
    char name [10] ;
    printf("\nwrite your name\n") ;
    scanf("%s",name) ;
    printf("entre le nombre a \n");
    scanf("%d",&a) ;
    printf("entre le nombre b  \n");
    scanf("%d",&b) ;
    printf("entre les deux nombre real\n") ;
    scanf("%f",&r) ;
    scanf("%f",&s) ;
    printf("\nwelcame%s",name);
    printf("\ndonnez c la some de a+b %d ",a+b);
    printf("\ndonnez t la some de r et s %f",r+s);

    return 0;
}
