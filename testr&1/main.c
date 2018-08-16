#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    long f;
    int k,a=1 ;
    do{
    f=1;
    k=1;
    do {
    f*=k;
    ++k;
    }
    while(k<=a);
    printf("%d!=%d\n",a,f);
    ++a;
    }while(a<=10);
    return 0;
}
