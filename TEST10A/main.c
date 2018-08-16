#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    char op;
    printf("entre two real nombre:\n") ;
    scanf("%f%f",&a,&b);
    printf("entre l'operator:\n") ;
    scanf("%s",&op) ;
    switch (op) {
    case '+':printf("%f+%f=%f",a,b,a+b) ;
    break ;
    case '-':printf("%f-%f=%f",a,b,a-b) ;
    break ;
    case '*':printf("%f*%f=%f",a,b,a*b)  ;
    break ;
    case '/':if(b==0){
    printf("rdn b:");
    scanf("%f",&b) ;
    }
        printf("%f/%f=%f",a,b,a/b)  ;
    break ;
    default : printf("redonnez l'operator:");

    }
    return 0;
}
