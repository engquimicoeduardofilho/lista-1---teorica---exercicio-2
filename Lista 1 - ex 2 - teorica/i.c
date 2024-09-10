#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c;
    float D;
    float x1;
    float x2;
 
    printf("Para a funcao y=ax^2+bx+c\n o coeficiente a: ");
    scanf("%f", &a);
    printf("\n insira o coeficiente b: ");
    scanf("%f", &b);
    printf("\n insira o coeficiente c: ");
    scanf("%f", &c);

    D = (b*b)-4*a*c;
    x1= (-(b)+sqrt(D))/(2*a);
    x2= (-(b)-sqrt(D))/(2*a);

    printf("\n\nsuas raizes e (%f,%f)", x1,x2);

    return 0;
}