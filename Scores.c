#include <stdio.h>
#include <cs50.h>

#include <stdio.h>

int main() {
    char nome[50];

    printf("Olá, qual o seu nome?\n");
    fgets(nome, 50, stdin); 

    printf("Olá %s", nome); 

    printf("%sObrigada!\n", nome);

    return 0;
}

