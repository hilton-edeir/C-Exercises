#include <stdio.h>

/*
11. Uma empresa de moldes, a trabalhar 8 horas por dia, possui a capacidade de produzir 1300
peças. Sabendo que 13% desse material possui defeito, elabore um algoritmo que calcule o
número de peças em bom estado manufacturadas durante 6 dias
*/

int main() {

    int quantidade_pecas;
    int pecas_defeituosas;

    printf("\n*** EMPRESA DE MOLDES ***\n\n");

    do {
        printf("Insira a quantidade de peca(s): ");
        scanf("%d", &quantidade_pecas);

        if(quantidade_pecas < 0)
            printf("\nQuantidade invalida!\n");
    } while(quantidade_pecas < 0);
    
    pecas_defeituosas = (0.06 * quantidade_pecas) * 6;

    printf("");

    return 0;
}