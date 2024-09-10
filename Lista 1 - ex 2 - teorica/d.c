#include <stdio.h>
#include <stdlib.h>

int main (){
    float r;
    float a;

    printf("\n qual o raio do seu circulo? ");
    scanf("%f", &r);

    a= 3.14*(r*r);

    printf("\nsua area e igual a: %f", a);

    return 0;
}