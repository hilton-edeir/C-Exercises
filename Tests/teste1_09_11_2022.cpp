#include <stdio.h>
/*
Considere que tem de desenvolver o software para gerir uma estação de carregamento de baterias de trotinetes
elétricas, obedecendo às seguintes regras:
    * A estação tem a capacidade de carga máxima total de 200 Wh (quantidade de energia total disponível em cada
    momento) e possui N=5 fichas para carregamento simultâneo. Em cada ficha apenas pode ser ligada uma
    trotinete.
    * Para carregar a sua trotinete, o utilizador deve (além de ligar a ficha) introduzir o valor que pretende carregar
    em Wh.
    * Caso o utilizador introduza um valor de carga superior ao disponível no momento, deverá ser alertado da
    impossibilidade de fornecer essa quantidade de energia e calculada a carga que é possível disponibilizar.
    * O tempo estimado de carga (em minutos) pode ser calculado da seguinte forma:
    tempoCarga = 1,35 * quantidadeEnergia.
Considerando o exposto e o exemplo de execução apresentado abaixo, desenvolva um programa que, enquanto
houver fichas e carga disponíveis, solicite ao utilizador a quantidade de energia a carregar na sua trotinete (valor
inteiro entre 20 e 50, incluindo os limites referidos).
Para cada trotinete ligada ao sistema, deve ser mostrada (no monitor) a quantidade de energia que será carregada
(em Wh), o tempo estimado de carga, assim como, a média de carga que as fichas da estação estão a fornecer. Esta
média corresponde ao rácio entre a carga total disponibilizada no momento e o número de fichas ocupadas
*/

int main() {
    int carga_maxima_total = 200;
    int total_fichas = 5;
    int ficha_ocupada = 0;
    int quant_energia;
    int total_energia_fornecida = 0;
    float tempoCarga;
    float media;
    

    printf("\n*** ESTACAO DE CARREGAMENTO ***\n");

    for(int i = 1; i <= total_fichas; i++) {
        do {
            printf("Ficha %d - Introduza a quantidade (entre 20 e 50): ", i);
            scanf("%d", &quant_energia);
        } while(quant_energia < 20 || quant_energia > 50);


        if(carga_maxima_total < quant_energia) {
            printf("\nQuantidade Indisponivel\n");

            tempoCarga = 1.35 * carga_maxima_total;
            media = total_energia_fornecida/ficha_ocupada;

            printf("%d Wh (%.0f minutos). media %.2f\n", carga_maxima_total, tempoCarga, media);
        }
        else {
            carga_maxima_total = carga_maxima_total - quant_energia;
            total_energia_fornecida = total_energia_fornecida + quant_energia;
            tempoCarga = 1.35 * quant_energia;
            ficha_ocupada = ficha_ocupada + 1;
            media = total_energia_fornecida/ficha_ocupada;

            printf("%d Wh (%.0f minutos), media %.2f\n", quant_energia, tempoCarga, media);
        }

    }
    return 0;
}