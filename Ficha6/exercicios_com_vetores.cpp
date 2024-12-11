#include <stdio.h>
#define tam_vetor 4

int main() {
    int vetor[tam_vetor];
    int vetor_invertido[tam_vetor];
    int vetor_deslocado_direita[tam_vetor];
    int vetor_deslocado_esquerda[tam_vetor];
    int i;
    int j;
    int maior;

    int posicao_maior;
    float media = 0;
    int soma = 0;

    int frequencia_moda;
    int ocorrencia;
    int moda;

    printf("\n-------------- Preencher o vetor --------------\n");

    for(i = 0; i < tam_vetor; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n--------------  Vetor invertido --------------\n");

    for (i = 1; i <= tam_vetor; i++) {
        vetor_invertido[i - 1] = vetor[tam_vetor - i];
    }

    for(i = 0; i < tam_vetor; i++) {
        printf("\nVetor[%d]: %d", i, vetor_invertido[i]);
    }

    printf("\n-------------- Vetor deslocado para direita --------------\n");

    vetor_deslocado_direita[0] = vetor[tam_vetor - 1];
    
    for (i = tam_vetor - 1; i >= 1; i--) {
        vetor_deslocado_direita[i] = vetor[i - 1];
    }

    for (i = 0; i < tam_vetor; i++) {
        printf("\nVetor[%d]: %d", i, vetor_deslocado_direita[i]);
    }

    printf("\n-------------- Vetor deslocado para esquerda --------------\n");

    vetor_deslocado_esquerda[tam_vetor - 1] = vetor[0];

    for(i = 0; i < tam_vetor - 1; i++) {
        vetor_deslocado_esquerda[i] = vetor[i + 1];
    }

    for (i = 0; i < tam_vetor; i++) {
        printf("\nVetor[%d]: %d", i, vetor_deslocado_esquerda[i]);
    }

    printf("\n-------------- Maior valor do vetor original --------------\n");

    maior = vetor[0];
    posicao_maior = 0;

    for(i = 1; i < tam_vetor; i++) {
        if(maior <= vetor[i]) {
            maior = vetor[i];
            posicao_maior = i;
        }
    }

    printf("Maior: %d\nPosicao: %d", maior, posicao_maior);

    printf("\n-------------- Maior valor do vetor invertido --------------\n");

    maior = vetor_invertido[0];
    posicao_maior = 0;

    for(i = 1; i < tam_vetor; i++) {
        if(maior <= vetor_invertido[i]) {
            maior = vetor_invertido[i];
            posicao_maior = i;
        }
    }

    printf("Maior: %d\nPosicao: %d", maior, posicao_maior);

    printf("\n-------------- Maior valor do vetor deslocado para direita --------------\n");

    maior = vetor_deslocado_direita[0];
    posicao_maior = 0;
    
    for(i = 1; i < tam_vetor; i++) {
        if(maior <= vetor_deslocado_direita[i]) {
            maior = vetor_deslocado_direita[i];
            posicao_maior = i;
        }
    }

    printf("Maior: %d\nPosicao: %d", maior, posicao_maior);

    printf("\n-------------- Maior valor do vetor deslocado para esquerda --------------\n");

    maior = vetor_deslocado_esquerda[0];
    posicao_maior = 0;
    
    for(i = 1; i < tam_vetor; i++) {
        if(maior <= vetor_deslocado_esquerda[i]) {
            maior = vetor_deslocado_esquerda[i];
            posicao_maior = i;
        }
    }

    printf("Maior: %d\nPosicao: %d", maior, posicao_maior);

    printf("\n-------------- Media dos valores do vetor --------------\n");
    
    for(i = 0; i < tam_vetor; i++) {
        soma = soma + vetor[i];
    }

    media = (float) soma / tam_vetor;
    printf("\nmedia: %.2f", media);


    printf("\n-------------- Moda dos valores do vetor --------------\n");

    moda = vetor[0];
    frequencia_moda = 1;
    ocorrencia = 0;

    for (i = 0; i < tam_vetor; i++) {
        for(j = 0; j < tam_vetor; j++) {
            if(vetor[i] == vetor[j]) {
                ocorrencia = ocorrencia + 1;
            }
        }

        if(ocorrencia > frequencia_moda) {
            frequencia_moda = ocorrencia;
            moda = vetor[i];
        }

        ocorrencia = 0;
    }

    if(frequencia_moda == 1) {
        printf("\nNao existe moda\n", moda, frequencia_moda);
    }
    else {
        printf("\nmoda: %d\nOcorencia(s): %d\n", moda, frequencia_moda);
    }


    printf("\n\n\n");
    return 0;
}