#include <stdio.h>

/* 
5. Uma empresa de venda de carros usados paga aos seus funcionários vendedores um salário
fixo por mês, mais uma comissão (de valor fixo) por cada carro vendido, acrescido de 5% do valor
total de vendas efectuadas pelo funcionário ao longo do mês. Estabeleça um algoritmo que leia o
número do vendedor, o número de carros por ele vendidos, o valor total de suas vendas, o salário
fixo e o valor recebido por carro vendido e calcula o salário mensal do vendedor, escrevendo-o
juntamente com o seu número de identificação
*/

int main(){

    int numero_vendedor;
    float salario_fixo;
    int numero_carros_vendidos;
    float preco_carro;
    float preco_total_venda = 0;
    float comissao_venda = 0;

    printf("*** SALARIO MENSAL DOS FUNCIONARIOS ***\n\n");
    
    printf("Numero do vendedor: ");
    scanf("%d", &numero_vendedor);

    printf("Salario fixo (Euros): ");
    scanf("%f", &salario_fixo);

    printf("Total de carros vendidos: ");
    scanf("%d", &numero_carros_vendidos);

    for(int i = 1; i <= numero_carros_vendidos; i++) {
        do {
            printf("Preco do carro %d: ", i);
            scanf("%f", &preco_carro);
        } while(preco_carro < 0);

        preco_total_venda = preco_total_venda + preco_carro;
    }

    return 0;
}