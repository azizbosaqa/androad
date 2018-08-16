/*tartib trois nombre grand a petit*/
#include <stdio.h>

#include <stdlib.h>

int main()
{
    float x,y,z ;
    printf("donnez trois nommbre :");
    scanf("%f%f%f",&x,&y,&z);
    if(x>y&&y>z){
        printf("classement est\n%f,%f,%f",x,y,z) ;
    }if(x>z&&z>y){
    printf("classement est\n%f,%f,%f :",x,z,y) ;
    }if(y>x&&x>z){
    printf("classement est\n%f,%f,%f :",y,x,z) ;
    }if(y>z&&z>x){
    printf("classement est\n%f,%f,%f :",y,z,x) ;
    }if(z>y&&y>x){
    printf("classement est\n%f,%f,%f :",z,y,x) ;
    }if(z>x&&x>y){
    printf("classement est\n%f,%f,%f :",z,x,y) ;
    }
    return 0;
}
