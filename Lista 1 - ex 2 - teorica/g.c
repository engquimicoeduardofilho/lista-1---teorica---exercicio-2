#include <stdio.h>
#include <stdlib.h>

int main (){
    float p;
    float v;
    float t;
    float m;

    printf("\nQual a pressao do seu pneu? ");
    scanf("%f", &p);

    printf("\nQual o volume do seu pneu? ");
    scanf("%f", &v);

    printf("\nQual a temperatura do seu pneu? ");
    scanf("%f", &t);

    m = (p*v)/(t+460)/0.37;

    printf("\n\na massa de ar do seu pneu e: %f", m);

    return 0;
}