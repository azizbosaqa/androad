#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length , width ;
    int area , perimetre ;
    printf("the length is =\n");
    scanf("%d",&length);
    printf("the width is =\n");
    scanf("%d",&width);
    perimetre=2*(length+width) ;
    area=length*width ;
    printf("the perimetre is =%d\n",perimetre);
    printf("the area is =%d",area);
    return 0;
}
