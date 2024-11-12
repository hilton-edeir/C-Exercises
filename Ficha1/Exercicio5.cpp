#include <stdio.h>

/* 
5.Uma empresa de venda de carros usados paga aos seus funcionários vendedores um salário
fixo por mês, mais uma comissão (de valor fixo) por cada carro vendido, acrescido de 5% do valor
total de vendas efectuadas pelo funcionário ao longo do mês. Estabeleça um algoritmo que leia o
número do vendedor, o número de carros por ele vendidos, o valor total de suas vendas, o salário
fixo e o valor recebido por carro vendido e calcula o salário mensal do vendedor, escrevendo-o
juntamente com o seu número de identificação
*/

int main() {
    int numero_vendedor;
    float salario_fixo;
    float salario_comissao;
    int numero_carros_vendidos;
    float preco_carro;
    float preco_total_vendido = 0;
    float comissao_venda = 0;

    printf("\n*** SALARIO MENSAL DOS FUNCIONARIOS ***\n\n");
    
    do {
        printf("Numero do vendedor: ");
        scanf("%d", &numero_vendedor);

        if(numero_vendedor <= 0)
            printf("Numero de vendedor invalido!\n");
    } while(numero_vendedor <= 0);

    do {
        printf("Salario fixo (Euros): ");
        scanf("%f", &salario_fixo);

        if(salario_fixo <= 0)
            printf("Salario invalido\n");
    } while(salario_fixo <= 0);
    
    do {
        printf("Total de carro(s) vendido(s): ");
        scanf("%d", &numero_carros_vendidos);

        if(numero_carros_vendidos <= 0)
            printf("Total de carro(s) vendido(s) invalido\n");
    } while (numero_carros_vendidos <= 0);
   
    for(int i = 1; i <= numero_carros_vendidos; i++) {
        do {
            printf("Preco do carro %d: ", i);
            scanf("%f", &preco_carro);

            if (preco_carro <= 0) {
                printf("Preco invalido!\n");  
            }
        } while(preco_carro <= 0);

        preco_total_vendido = preco_total_vendido + preco_carro;
    }

    comissao_venda = preco_total_vendido * 0.05;
    salario_comissao = salario_fixo + comissao_venda;

    printf("\n------------------------------------------");    
    printf("\nFuncionario: %.8d", numero_vendedor);
    printf("\nSalario fixo: %.2f Euros" , salario_fixo);
    printf("\nTotal de carro(s) vendido(s): %d", numero_carros_vendidos);
    printf("\nPreco total vendido: %.2f Euros", preco_total_vendido);
    printf("\nComissao de venda ganhado: %.2f Euros", comissao_venda);
    printf("\nSalario com comissao: %.2f Euros", salario_comissao);

    return 0;
}