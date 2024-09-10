#include <stdio.h>
#include <stdlib.h>

int main (){
    int a;
    int b;
    int c;
    int d;
    int t;

    printf("\nquantas notas de 1 real tem? ");
    scanf("%d", &a);
    printf("\nquantas notas de 10 reais tem? ");
    scanf("%d", &b);
    printf("\nquantas notas de 50 reais tem? ");
    scanf("%d", &c);
    printf("\nquantas notas de 100 reais tem? ");
    scanf("%d", &d);

    t= a*1+b*10+c*50+d*100;

    printf("\n o valor total e igual a: %d",t);

    return 0;
}