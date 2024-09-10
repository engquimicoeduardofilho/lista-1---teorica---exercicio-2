#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float f;
    float c;

    printf("\nQual a temperatura em Farenheit? ");
    scanf("%f", &f);

    c=((5.0/9.0)*(f-32));

    printf("\na temperatura em Centigrados e igual a: %2.f", c);

    return 0;
}