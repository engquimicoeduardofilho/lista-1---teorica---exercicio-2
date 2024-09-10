#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[100];
    int a;
    int b;

    printf("\nqual o seu nome? ");
    scanf("%s", &nome);

    printf("\nlegal, %s e qual a sua idade? ", nome);
    scanf("\n%d", &a);

    b= a*365;

    printf("\nvoce tem aproximadamente %d dias\n ", b);

    return 0;
}