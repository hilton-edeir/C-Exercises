#include <stdio.h>
#include <stdlib.h>

/*
14.Elabore o algoritmo de um programa que calcule o valor total a pagar por determinado artigo,
sabendo o tipo de artigo e o seu preço sem IVA. Suponha que a taxa de IVA é de 5 % para os
bens essenciais, 30% para os produtos de luxo e 20 % para os restantes.
*/

int main() {
    float preco_sem_iva;
    float preco_com_iva;
    char tp;
    float iva_bens_essenciais = 0.05;
    float iva_produto_luxo = 0.3;
    float iva_outros = 0.2;

    printf("\n*** CALCULO PRECO PRODUTO ***\n\n");
    printf("Insira o preco do produto (Eur): ");
    scanf("%f", &preco_sem_iva);
    getchar();

    do {
        printf("Tipo do produto: ");
        scanf("%c", &tp);
        getchar();

    } while(tp != 'E' && tp != 'e' && tp != 'L' && tp != 'l' && tp != 'o' && tp != 'o');

    printf("\n---------------------------------------");
    
    if(tp == 'E' || tp == 'e') {
        preco_com_iva = preco_sem_iva + (preco_sem_iva * iva_bens_essenciais);
        printf("\nTipo de produto: Essencial");
        printf("\nPreco sem IVA: %.2f Eur", preco_sem_iva);
        printf("\nPreco com IVA: %.2f Eur", preco_com_iva);
    }
    else if(tp == 'L' || tp == 'l') {
        preco_com_iva = preco_sem_iva + (preco_sem_iva * iva_produto_luxo);
        printf("\nTipo de produto: Luxo");
        printf("\nPreco sem IVA: %.2f Eur", preco_sem_iva);
        printf("\nPreco com IVA: %.2f Eur", preco_com_iva);
    }
    else {
        preco_com_iva = preco_sem_iva + (preco_sem_iva * iva_outros);
        printf("\nTipo de produto: Outro");
        printf("\nPreco sem IVA: %.2f Eur", preco_sem_iva);
        printf("\nPreco com IVA: %.2f Eur", preco_com_iva);
    }

    return 0;
}