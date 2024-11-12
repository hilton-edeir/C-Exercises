#include <stdio.h>

/*
9.Um agricultor efectuou a sua vindima e vai destinar 3/4 da sua colheita para produzir vinho numa
cooperativa, ficando o restante para seu consumo pessoal. Da quantidade entregue na cooperativa
3/5 serão utilizados para a produção de vinho branco e o restante para vinho tinto. Elabore um
algoritmo que obtendo a quantidade (em Kg) de uvas colhidas, calcule as quantidades que vão ser
destinadas a consumo próprio e à produção de cada um dos vinhos.
*/

int main(){
    float peso_uvas;
    float uvas_consumo;
    float uvas_cooperativa;
    float uvas_vinho_tinto;
    float uvas_vinho_branco;

    printf("*** CALCULO DE PRODUCAO DE VINHO ***\n\n");

    do {
        printf("Insira a quantidade uva (Kg): ");
        scanf("%f", &peso_uvas);

        if(peso_uvas <= 0)
            printf("\nPeso invalido!\n");

    } while(peso_uvas <= 0);
    
    uvas_consumo = peso_uvas - (peso_uvas * 0.75);
    uvas_cooperativa = peso_uvas - uvas_consumo;

    uvas_vinho_tinto = uvas_cooperativa - (uvas_cooperativa * 0.6);
    uvas_vinho_branco = uvas_cooperativa - uvas_vinho_tinto;

    printf("\n------------------------------");
    printf("\nConsumo proprio: %.2f Kg", uvas_consumo);
    printf("\nCooperativa: %.2f Kg", uvas_cooperativa);
    printf("\nVinho Branco: %.2f Kg", uvas_vinho_branco);
    printf("\nVinho tinto: %.2f Kg", uvas_vinho_tinto);
    
    return 0;
}