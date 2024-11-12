#include <stdio.h>

/*
11.Uma empresa de moldes, a trabalhar 8 horas por dia, possui a capacidade de produzir 1300
peças. Sabendo que 13% desse material possui defeito, elabore um algoritmo que calcule o
número de peças em bom estado manufacturadas durante 6 dias
*/

int main() {
    int quantidade_pecas;
    int pecas_def_dia;
    int dias;

    printf("\n*** EMPRESA DE MOLDES ***\n\n");

    do {
        printf("Insira a quantidade de peca(s): ");
        scanf("%d", &quantidade_pecas);

        if(quantidade_pecas < 0)
            printf("\nQuantidade invalida!\n");
    } while(quantidade_pecas < 0);

    do {
        printf("Dia(s): ");
        scanf("%d", &dias);

        if(dias < 0)
            printf("\nDia invalido!\n");
    } while(dias < 0);
    
    pecas_def_dia = 0.06 * quantidade_pecas;
    
    printf("\n---------------------------------------");
    printf("\nTotal de peças: %d", quantidade_pecas);
    printf("\nPecas defeituosas por dia: %d", pecas_def_dia);
    printf("\nPecas defeituosas em %d dias: %d", dias, pecas_def_dia * dias);

    return 0;
}