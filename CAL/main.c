#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;
    a=2 ;
    b=(a+=4,12/a);
    printf("Hello world!b=%d,a=%d",b,a);
    return 0;
}
