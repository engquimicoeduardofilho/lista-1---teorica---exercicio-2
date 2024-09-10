#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[100];

    printf("\nola eu sou o N1, qual e o seu nome? ");
    scanf("%s", &nome);

    printf("Bem vindo ao clube %s", nome);

    return 0;
}