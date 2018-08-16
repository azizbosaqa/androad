/*factorial while*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long factorial ;
    int k,a=1 ;
    while(a<=10){
        factorial=1 ;
        k=1;
        while (k<=a){
            factorial*=k ;
            ++k ;
        }
        printf("%d!=%d\n",a,factorial);
        ++a;
    }
    return 0;
}
