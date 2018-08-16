#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,som=0 ;
    for(i=1;i<10;i++)
{
      printf("entre valure\n:") ;
      scanf("%d",&n);
      if(n<0)
      {
        printf("négative numbre");
        exit();
      }
      som+=n;
      printf("LENOMBREEST/%d\n",som) ;
}
    return 0;

}
