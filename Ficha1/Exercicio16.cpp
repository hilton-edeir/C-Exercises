#include <stdio.h>

/*
16.Construa um algoritmo para ler dois valores e seleccione uma das seguintes operações a ser
executada (1. Adição, 2. Subtracção, 3. Divisão, 4. Multiplicação). O Algoritmo deve calcular e
escrever o resultado dessa operação com base nos dois valores lidos.
*/

int main() {
    float numero1;
    float numero2;
    int operacao;

    printf("\n*** OPERACAO ARITMETICA ***\n\n");

    printf("Insira um numero: ");
    scanf("%f", &numero1);
    printf("Insira outro numero: ");
    scanf("%f", &numero2);

    printf("\n1.Adicao\n2.Subtracao\n3.Divisao\n4.Multiplicacao\n\n");
    printf("Qual operacao efetuar: ");
    scanf("%d", &operacao);

    printf("------------------------------");
    switch(operacao) {
        case 1:
            printf("\nOperacao: Soma\n");
            printf("%.2f + %.2f = %.2f\n\n", numero1, numero2, numero1 + numero2);
            break;
        case 2:
            printf("\nOperacao: Subtracao\n");
            printf("%.2f - %.2f = %.2f\n\n", numero1, numero2, numero1 - numero2);
            break;
        case 3:
            printf("\nOperacao: Divisao\n");
            printf("%.2f / %.2f = %.2f\n\n", numero1, numero2, numero1 / numero2);
            break;
        case 4:
            printf("\nOperacao: Multiplicacao\n");
            printf("%.2f * %.2f = %.2f\n\n", numero1, numero2, numero1 * numero2);
            break;

        default: printf("\nOperação inexistente!\n\n");
    }
/*
    //Ou em vez de usarmos o switch case, podemos substitui-lo po  if else
    if(operacao == 1) {
        printf("\nOperacao: Soma\n");
        printf("%.2f + %.2f = %.2f\n\n", numero1, numero2, numero1 + numero2);
    }
    else if(operacao == 2) {
        printf("\nOperacao: Subtracao\n");
        printf("%.2f - %.2f = %.2f\n\n", numero1, numero2, numero1 - numero2);
    }
    else if(operacao == 3) {
        printf("\nOperacao: Divisao\n");
        printf("%.2f / %.2f = %.2f\n\n", numero1, numero2, numero1 / numero2);
    }
    else if(operacao == 4) {
        printf("\nOperacao: Multiplicacao\n");
        printf("%.2f * %.2f = %.2f\n\n", numero1, numero2, numero1 * numero2);
    }
    else {
        printf("\nOperação inexistente!\n\n");
    }
*/
    return 0;
}