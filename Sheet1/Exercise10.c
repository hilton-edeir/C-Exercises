#include <stdio.h>

/*
10. Especifique o algoritmo de um programa que leia um número inteiro de segundos e escreva no
monitor o número de horas, minutos e segundos equivalentes. (Exemplo: 7322 = 2h 2m 2s)
*/

int main() {

    int tempo;
    int segundo;
    int minuto;
    int hora;

    printf("\n*** CONVERSAO DE SEGUNDOS/HORA ***\n\n");

    do {
        printf("Insira o tempo (segundos): ");
        scanf("%d", &tempo);

        if(tempo < 0)
        printf("\nTempo invalido!\n");

    } while(tempo < 0);

    hora = tempo / 3600;
    minuto = (tempo % 3600) / 60;
    segundo = tempo % 60;
    
    printf("%d segundos = %dh %dm %ds ", tempo, hora, minuto, segundo);

    return 0;  
}