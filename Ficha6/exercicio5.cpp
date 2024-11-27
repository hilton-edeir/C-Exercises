#include <stdio.h>

int main() {
    int numero;
    int tamanho_vetor;
    int auxiliar;
    int vetor[tamanho_vetor];
    int i = 0;

    printf("*** NUMERO CAPICUA ***\n\n");

    do {
        printf("Insira um numero inteiro: ");
        scanf("%d", &tamanho_vetor);

        printf("Insira um numero inteiro: ");
        scanf("%d", &numero);

    } while(numero <= 0 && tamanho_vetor <= 0);

    auxiliar = numero;

    while(numero > 0) {
        vetor[i] = numero % 10;
        numero = numero / 10;
        i++;
    }
    
    for(i = 0; i < )

    return 0;
}