#include <stdio.h>

/*
Um professor pretende determinar o número de alunos aprovados numa determinada época de exame a uma unidade curricular (UC).

A nota final de cada aluno é calculada a partir da nota que o aluno obteve nas avaliações e de uma valorização que depende 
das presenças do aluno às aulas dessa UC. Assim, se o número de presenças do aluno for acima de 10 a nota final é calculada 
acrescentando 1.5 valores à nota que o aluno obteve nas avaliações. Se o número de presenças estiver entre 7 (inclusive) 
e 10 (inclusive) deverão ser acrescentados 0.75 valores à nota que o aluno obteve nas avaliações. E, por fim, se o número 
de presenças for abaixo de 3 deverá ser retirado 1 valor à nota que o aluno obteve nas avaliações.

Desenvolva um programa que, para cada aluno, solicite ao utilizador a nota que esse aluno obteve nas avaliações e o número 
de presenças do aluno às aulas dessa UC (valor não negativo e inferior ou igual a 14), e que calcule e mostre no ecrã a 
nota final desse aluno (com zero casas decimais). Quando o utilizador introduzir uma nota negativa, o programa deverá 
apresentar no monitor o número total de alunos aprovados nessa época de exame e a essa UC e terminar a execução.
*/

int main() {
    float nota;
    int numero_presenca;
    float nota_final;
    float BONUS_PRESENCA1 = 1.5;
    float BONUS_PRESENCA2 = 0.75;
    int PENALIZACAO = 1;
    int numero_aprovados = 0;
    int i = 1;

    printf("\n*** NOTA FINAL DO ALUNO ***\n\n");

    do {
        printf("Insira a sua nota: ");
        scanf("%f", &nota);

        if(nota < 0)
            break;

        do {
            printf("Insira o numero de presenca: ");
            scanf("%d", &numero_presenca);

        } while(numero_presenca > 14 || numero_presenca < 0);

        if(numero_presenca > 10) {
            nota_final = nota + BONUS_PRESENCA1;
        }
        else if(numero_presenca >=7 && numero_presenca <= 10) {
            nota_final = nota + BONUS_PRESENCA2;
        }
        else if(numero_presenca < 3) {
            nota_final = nota - PENALIZACAO;
        }

        if(nota_final >= 10) {
            numero_aprovados = numero_aprovados + 1;
        }

        printf("Nota final do aluno %d: %.0f\n\n", i, nota_final);
        i++;

    } while(nota >= 0);

    printf("Numero de alunos aprovados: %d", numero_aprovados);

    return 0;
}