#include <stdio.h>

/*
A empresa DáCáMaisUm pretende organizar uma festa de Natal para os seus funcionários, com entrega
de um presente, no decorrer da festa, aos participantes mais pequenos. A surpresa a oferecer
dependerá da idade da criança, de acordo com a seguinte tabela:
-----------------------------------------------------------------------
| Idade da criança                            | Presente a oferecer   |
-----------------------------------------------------------------------
| Até 1 ano, inclusive                        | Surpresa tipo 1       |
| Mais de 1 ano e menos de 3 anos, inclusive  | Surpresa tipo 2       |
| Mais de 3 ano e menos de 8 anos, inclusive  | Surpresa tipo 3       |
-----------------------------------------------------------------------
Com a finalidade de ajudar os responsáveis pela festa, desenvolva um programa que vá pedindo a cada
empegado o seu nº de funcionário, bem como o número de filhos com idade inferior a 9 anos que irão à
festa e as respetivas idades, até que seja inserido um nº de funcionário não válido (ou seja, não
positivo).
No final, o programa deverá indicar qual o número de presentes de cada tipo que a empresa deve
adquirir para oferecer à pequenada durante a referida festa.
O programa deverá validar os dados de entrada, garantindo que o número de filhos é um valor positivo
e a idade é um valor não negativo.
*/

int main() {
    int num_func;
    int num_filhos;
    int idade_filho;
    int supresa_1 = 0;
    int surpresa_2 = 0;
    int surpresa_3 = 0;

    printf("\n**** FESTA DACAMAISUM ****\n\n");

    do {
        printf("Indique o seu numero de funcionario: ");
        scanf("%d", &num_func);

        if(num_func < 0)
            break;

        printf("Numero de filhos que irao a festa (< 9 anos): ");
        scanf("%d", &num_filhos);

        for(int i = 1; i <= num_filhos; i++) {
            printf("Idade do filho %i: ", i);
            scanf("%d", &idade_filho);
        
            if(idade_filho < 0 || idade_filho > 8) {
                i--;
                continue;
            }

            if(idade_filho <= 1) {
                supresa_1 = supresa_1 + 1;
            }
            else if(idade_filho <= 3) {
                surpresa_2 = surpresa_2 + 1;
            }
            else {
                surpresa_3 = surpresa_3 + 1;
            }
        }

        printf("\n---------------------------------------------------\n");

    } while(num_func > 0);

    printf("===========================================================");
    printf("\nPara a festa sera preciso comprar os seguintes presentes:");
    printf("\nSurpresa tipo 1: %d", supresa_1);
    printf("\nSurpresa tipo 2: %d", surpresa_2);
    printf("\nSurpresa tipo 3: %d", surpresa_3);

    return 0;
}