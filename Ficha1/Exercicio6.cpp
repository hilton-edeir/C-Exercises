#include <stdio.h>

/*
6. Escreva um algoritmo para calcular o número de eleitores (votantes) de um município, tendo por
base o número de votos brancos, nulos e válidos. Deve também calcular e escrever a percentagem
que cada tipo de voto representa em relação ao total de votantes
*/

int main() {
    int votos_validos;
    int votos_em_branco;
    int votos_nulos;
    int total_votos;

    printf("\n*** ELEITORES ***\n\n");
    
    printf("Total de votos validos: ");
    scanf("%d", &votos_validos);

    printf("Total de votos em branco: ");
    scanf("%d", &votos_em_branco);

    printf("Total de votos nulos: ");
    scanf("%d", &votos_nulos);

    total_votos = votos_validos + votos_em_branco + votos_nulos;

    printf("\n--------------------------------");
    printf("\nTotal de votos: %d", total_votos);
    printf("\nVotos validos: %d (%.1f%%)", votos_validos, (votos_validos * 100.0) / total_votos);
    printf("\nvotos em branco: %d (%.1f%%)", votos_em_branco, (votos_em_branco * 100.0) / total_votos);
    printf("\nVotos nulos: %d (%.1f%%)", votos_nulos, (votos_nulos * 100.0) / total_votos);

    return 0;
}