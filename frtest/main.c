/*for,if,continue*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for (n=10;n>0;n--)
    {
        if(n==3)
        continue ;
        printf("%d\n",n);
    }
    printf("hello world!\n:") ;
    return 0;
}
