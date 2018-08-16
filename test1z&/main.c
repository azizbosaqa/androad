#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("entre a nombre :");
    scanf("%d",&n);
    do{
        printf("=%d\n",n);
        --n;
    }while (n!=0);
    return 0;
}
