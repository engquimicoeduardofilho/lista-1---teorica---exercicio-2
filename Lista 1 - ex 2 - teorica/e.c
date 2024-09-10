#include <stdio.h>
#include <stdlib.h>

int main (){
    float l;
    float c;
    float a;
    float ml;
    float lata;

    printf("qual a largura da sua parede? ");
    scanf("%f", &l);

    printf("qual o comprimento da sua parede? ");
    scanf("%f", &c);

    a = l*c;

    ml = a*300;

    lata = ml/2000;

    printf("\nvoce precisara de %f tintas", lata);

    return 0;
}