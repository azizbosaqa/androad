#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    long fa ;
    int k,a ;
    for(a=1;a<=10;a++){
    fa=1 ;
    for(k=1;k<=a;k++)
    fa*=k ;
    printf("%d!=%d\n",a,fa) ;
    }
    return 0;
}
