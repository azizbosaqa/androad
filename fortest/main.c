#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for (n=10;n>0;n--)
    {
        printf("%d",n);
        if(n==3)
        {
            printf("countdown :");
            break ;
        }
        printf("Hello world!\n");
    }

    return 0;
}
