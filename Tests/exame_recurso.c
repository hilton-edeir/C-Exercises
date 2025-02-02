#include <stdio.h>
#include <string.h>
#define TAM 100

char pedaco_frase(char frase[], int tam_palavra) {
    char pedaco_frase[TAM];

    for(int i = 0; i < tam_palavra; i++) {
        pedaco_frase[i] = frase[i];
    }

    return pedaco_frase;
}

int contar_ocorrencias(char frase[], char palavra[]) {
    int tam_frase = strlen(frase);
    int tam_palavra = strlen(palavra);
    int numero_ocorrencias = 0;
    int j;
    int i;

    for(int i = 0; i < tam_frase; i++) {
        if(strcmp(frase[i], palavra[i]) == 0) {

        }
    }

    return numero_ocorrencias;
}

int main() {
    char frase[TAM];
    char palavra[TAM];
    int numero_ocorrencias = 0;

    do {
        printf("Insira a frase: ");
        fgets(frase, TAM, stdin);
        frase[strcspn(frase, "\n")] = 0;
    } while (strlen(frase) == 0);

    do {
        printf("Insira a palavra: ");
        fgets(palavra, TAM, stdin);
        palavra[strcspn(palavra, "\n")] = 0;
    } while (strlen(palavra) == 0);

    contar_ocorrencias(frase, palavra);

    // printf("\n\nA frase: %s\n", frase);
    // printf("Palavra: %s\n", palavra);
    // printf("Numero de ocorrencias: %d\n", numero_ocorrencias);

    return 0;
}