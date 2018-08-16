#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,some=0 ;
    for(i=1;i<10;i++)
    {
        printf("entree valure\n:");
        scanf("%d",&n);
        if (n<0)
        {
            printf("négative valure:");
            exit();
        }
        some+=n;
    }
    printf("%d",some) ;
    return 0;
}
