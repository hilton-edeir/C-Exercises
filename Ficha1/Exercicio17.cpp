#include <stdio.h>

/*
17. Para participar da categoria OURO do 1º Campeonato Mundial de Esgrima um atleta deve
pesar entre 70 Kg (inclusive) e 80 Kg (inclusive) e medir entre 1,75 m (inclusive) e 1,90 m
(inclusive). Escreva um algoritmo para ler a altura e o peso de um atleta e determinar se ele está
ou não apto para participar do campeonato. Deve escrever uma das seguintes mensagens
conforme cada situação.
• ‘RECUSADO POR ALTURA’ - (se somente a altura do jogador for inválida)
• ‘RECUSADO POR PESO’ - (se somente o peso do jogador for inválido)
• ‘TOTALMENTE RECUSADO’- (se a altura e o peso do jogador forem inválidos)
• ‘ACEITE' - (se a altura e o peso do jogador estiverem dentro dos intervalos especificados)
*/

int main() {
    float peso;
    float altura;

    printf("\n*** CAMPEONATO MUNDIAL DE ESGRIMA ***\n\n");


    printf("Insira o peso (kg): ");
    scanf("%f", &peso);


    printf("Insira a altura (cm): ");
    scanf("%f", &altura);

    if(peso >= 70 && peso <= 80) {
        if(altura >= 175 && altura <= 190) {
            printf("\nACEITE\n");
        }
        else {
            printf("\nRECUSADO POR ALTURA\n");
        }
    }
    else {
        if(altura >= 175 && altura <= 190) {
            printf("\nRECUSADO POR PESO\n");
        }
        else {
            printf("\nTOTALMENTE RECUSADO\n");
        }
    }

    return 0;
}