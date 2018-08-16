#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned a ;
    do {
        printf("donnez un nombre\n");
        scanf("%d",&a) ;
        printf("The nmb is =%d\n",a);
    }    while(a!=0);

    return 0;
}
