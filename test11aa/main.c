#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c ;
    printf("donnez les trois longueur de côte de triangle:\n");
    scanf("%f%f%f",&a,&b,&c) ;
    if(a==b){
    printf("triangle isosceles:");
    }if(a==b&&b==c&&a==c){
    printf("triangle equllanteral:");}
    if(a!=b&&a!=c&&b!=c){
    printf("triangle scalene:");
    }else {
    printf("triangle error:");
    }


    return 0;
}
