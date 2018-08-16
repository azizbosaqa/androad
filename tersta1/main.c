#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,num,som=0 ;
  for(i=1;i<10;i++)
  {
      printf("entre valure\n:") ;
      scanf("%d",&num);
      if(num<0)
      {
        printf("négative numbre");
        exit();
      }
      som+=num;
      printf(":%d\n",som) ;
  }
    return 0;
}
