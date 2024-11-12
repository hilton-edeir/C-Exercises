#include <stdio.h>

/*
8. Considere que um funcionário desconta 11% do seu ordenado ilíquido para a Segurança Social
e 25% para o IRS. Elabore um algoritmo que obtenha o vencimento ilíquido de um funcionário e
calcule o valor de cada parcela dos descontos assim como o valor do ordenado líquido
*/

int main(){
    float salario_iliquido;
    float salario_liquido;
    float desconto_seg_social = 0.11;
    float desconto_IRS = 0.25;

    printf("\n*** PARCELA DOS DESCONTOS ***\n\n");

    do {
        printf("Insira o seu salario iliquido: ");
        scanf("%f", &salario_iliquido);

        if(salario_iliquido <= 0)
            printf("\nSalario invalido!\n");

    } while(salario_iliquido <= 0);

    desconto_seg_social = salario_iliquido * 0.11;
    desconto_IRS = salario_iliquido * 0.25;

    salario_liquido = (salario_iliquido - desconto_seg_social) - desconto_IRS;

    printf("\n-----------------------------------");
    printf("\nSalario iliquido: %.2f Euros", salario_iliquido);
    printf("\nDesconto Seg Social: %.2f Eur", desconto_seg_social);
    printf("\nDesconto IRS: %.2f", desconto_IRS);
    printf("\nSalario liquido: %.2f", salario_liquido);

    return 0;
}