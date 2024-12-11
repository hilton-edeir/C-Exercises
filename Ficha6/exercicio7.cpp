#include <stdio.h>
# define TAM 5


int posicao_do_maior_elemento(int vetor[], int dimensao) {
    int maior = vetor[0];
    int posicao = 0;
    int i;

    for(i = 1; i < dimensao; i++) {
        if(maior <= vetor[i]) {
            maior = vetor[i];
            posicao = i;
        }
    }
    return posicao;
}

void deslocar_vetor_direita(int vetor[], int tam) {
    int vetor_deslocado[tam];
    int i;

    vetor_deslocado[0] = vetor[tam-1];

    for(i = 1; i < tam; i++) {
        vetor_deslocado[i] = vetor[i+1];
    }
   
    printf("\nVetor original = [ ");
    for(i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
    }
    printf("]");
    
}

int main() {
    int vetor[TAM];
    int i;
    int maior;
    int posicao;

    printf("*** EXERCICIO 7 ***\n\n");

    for(i = 0; i < TAM; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    } 

    posicao = posicao_do_maior_elemento(vetor, TAM);

    printf("\nMaior elemento: %d", vetor[posicao]);
    printf("\nPosicao: %d\n", posicao);

    return 0;
}