#include <stdio.h>

/*
7.Um motorista de táxi deseja calcular o rendimento do seu carro. Considerando que o preço do
combustível é de 1,3 €/litro, escreva um algoritmo para ler: a marcação do conta-quilómetros (Km)
no início do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto e o valor
total (em €) recebido dos passageiros. Deve ainda calcular e escrever a média do consumo em
Km/l e o lucro diário.
*/

int main() {
    float preco_combustivel = 1.3;
    float conta_km_inicial;
    float conta_km_final;
    float combustivel_gasto;
    float faturacao_dia;
    float lucro_diario;
    float media_consumo;

    printf("\n*** RENDIMENTO DO CARRO ***\n\n");

    printf("Insira kilometragem incial: ");
    scanf("%f", &conta_km_inicial);

    printf("Insira kilometragem final: ");
    scanf("%f", &conta_km_final);

    printf("Combustivel gasto (litro): ");
    scanf("%f", &combustivel_gasto);


    printf("Faturacao do dia (Eur): ");
    scanf("%f", &faturacao_dia);
    
    media_consumo = (conta_km_final - conta_km_inicial) / combustivel_gasto;
    lucro_diario = faturacao_dia - (combustivel_gasto * preco_combustivel);

    printf("\n-----------------------------");
    printf("\nMedia do consumo: %.2f km/l", media_consumo);
    printf("\nLucro diario: %.2f Euros", lucro_diario);

    return 0;
}