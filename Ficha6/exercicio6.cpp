#include <stdio.h>
#define TAM 6

int soma_maior_numero(int vetor[], int dimensao) {
    int maior = vetor[0];
    int soma = 0;
    int ocorrencia = 1;
    int i;

    for(i = 1; i < dimensao; i++) {
        if(maior <  vetor[i]) {
            maior = vetor[i];
            ocorrencia = 1;
        }
        else if(maior == vetor[i]) {
            ocorrencia = ocorrencia + 1;
        }
    }
    soma  = maior * ocorrencia;
    return soma;
}

int main() {
    int vetor[TAM];
    int i;
    int soma;

    printf("*** SOMA DE MAIORES INTEIROS NUM VETOR ***\n\n");
 
    for(i = 0; i < TAM; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    soma = soma_maior_numero(vetor, TAM);
    printf("\nSoma = %d", soma);
    return 0;
}

