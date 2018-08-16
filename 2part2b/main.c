/*محويل درجة الحرارة*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fh ,c ;
    printf("entre la degrée en fahrenheit\n");
    scanf("%f",&fh) ;
    c=(fh-32)*5/9 ;
    printf("la degré en celcius est %f:",c);
    return 0;
}
