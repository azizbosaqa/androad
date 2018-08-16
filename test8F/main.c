#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y ;
    printf("Hello ,donnez deux nombre\n");
    scanf("%f%f",&x,&y) ;
    if (x>y) {
        temp=x;
        x=y ;
        y=temp ;
    }
    printf("%f%f",&x,&y) ;
    return 0;
}
