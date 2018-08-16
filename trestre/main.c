#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    last:
        printf("%d",a) ;
        a++ ;
        if(a<=10)
        goto last ;
    printf("Hello world!\n");
    return 0;
}
