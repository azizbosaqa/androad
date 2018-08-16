#include <stdio.h>
#include <stdlib.h>

int main()
{
    long f ;
    int k,a=1 ;
    while(a<=10){
        f=1;
        k=1;
        while (k<=a){
            f*=k;
            ++k;
        }
        printf("%d=%d\n",a,f);
        ++a;
    }

    return 0;
}
