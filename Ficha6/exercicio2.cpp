#include <stdio.h>
#define TAM_VETOR 5 

int main() {
    int vetor[TAM_VETOR];
    int soma = 0;
    float media;
    int i = 0;

    printf("*** MEDIA VETOR ***\n\n");

    for(i = 0; i < TAM_VETOR; i++) {
        printf("\n%dº Numero: ", i+1);
        scanf("%d", &vetor[i]);

        soma = soma + vetor[i];
    }

    media = (float)soma / TAM_VETOR;
    printf("\nMedia = %.2f", media);

    for(i= 0; i < TAM_VETOR; i++) {
        if(vetor[i] < media) {
            vetor[i] = 0;
        }
        printf("\nVetor[%d] = %d", i, vetor[i]);
    }
    return 0;
}