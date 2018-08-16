#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c ;
    scanf("%d%d",&a,&b) ;
    c=(a>b)?a:b ;
    printf("le nombre le plus grand est: %d",c) ;

    int x,y ;
    scanf("%d%d",&x,&y) ;
    if(x>y){
        printf("le nombre le plus grand est: %d",x) ;
    }else{
    printf("le nombre le plus grand est: %d",y) ;
    }
    return 0;
}
