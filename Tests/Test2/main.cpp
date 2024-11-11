#include <stdio.h>

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