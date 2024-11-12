#include <stdio.h>

/*
13.Desenvolva o algoritmo de um programa que efectue a leitura de três valores inteiros a partir
do teclado e escreva o maior no monitor.
*/

int main() {
    int numero1;
    int numero2;
    int numero3;
    int maior;

    printf("\n*** MAIOR NUMERO INTEIRO ***\n\n");

    printf("Insira o 1º numero: ");
    scanf("%d", &numero1);

    printf("Insira o 2º numero: ");
    scanf("%d", &numero2);

    printf("Insira o 3º numero: ");
    scanf("%d", &numero3);

    if(numero1 >= numero2) {
        maior = numero1;
    }
    else {
        maior = numero2;
    }

    if(maior < numero3) {
        maior = numero3;
    }

    printf("Entre %d %d %d o maior eh %d", numero1, numero2, numero3, maior);
    return 0;
}