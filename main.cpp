#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int Ficha1() {
    int opcao;
    int validar_opcao;
    int voltar = 1;

    do {
        printf("\n**** AULAS PRATICAS - FICHA 1 ****");
        printf("\n----------------------------------\n\n");
        printf("1 - Exercicio 1\n2 - Exercicio 2\n3 - Exercicio 3\n"
               "4 - Exercicio 4\n5 - Exercicio 5\n\n0 - Voltar\n\n");
        printf("Escolha uma opcao: ");
        validar_opcao = scanf("%d", &opcao);

        if (validar_opcao == 1 && opcao >= 0) {
            if(opcao == 0) {
                return voltar;
            }
            break;
        }

        printf("\nExercicio indisponivel\nEscolha as que estao disponiveis\n", opcao);
        fflush(stdin);
        sleep(4);
        system("cls");

    } while(validar_opcao != 1  || opcao < 0);

    switch(opcao) {
        case 1:
            printf("Exercicio 1");
            sleep(2);
            break;
        case 2:
            printf("Exercicio 2");
            sleep(2);
            break;
        case 3:
            printf("Exercicio 3");
            sleep(2);
            break;
        case 4:
            printf("Exercicio 4");
            sleep(2);
            break;
        case 5:
            printf("Exercicio 4");
            sleep(2);
            break;
        default:
            printf("\nExercicio indisponivel\nEscolha os que estao disponiveis\n", opcao);
            sleep(5);
            system("cls");
            return Ficha1();
    }

    system("cls");
    return Ficha1();
}

void Ficha2() { }
void Ficha3() { }
void Ficha4() { }
void Ficha5() { }

int main() {
    int opcao;
    int validar_opcao;
    int voltar = 0;

    do {
        printf("\n**** AULAS PRATICAS - IP ****");
        printf("\n-----------------------------\n\n");

        printf("1 - Ficha de exercicios 1\n2 - Ficha de exercicios 2\n3 - Ficha de exercicios 3\n"
               "4 - Ficha de exercicios 4\n5 - Ficha de exercicios 5\n0 - Sair do programa\n");
        printf("\nEscolhe uma opcao: ");
        validar_opcao = scanf("%d", &opcao);

        if (validar_opcao == 1 && opcao >= 0) {
            break;
        }

        printf("\nFicha indisponivel\nEscolha as que estao disponiveis\n", opcao);
        fflush(stdin);
        sleep(4);
        system("cls");

    } while(validar_opcao != 1  || opcao < 0);

    switch(opcao) {
        case 0:
            printf("\nPrograma terminado\n");
            exit(0);
        case 1:
            system("cls");
            voltar = Ficha1();
            break;
        case 2:
            system("cls");
            Ficha2();
            break;
        case 3:
            system("cls");
            Ficha3();
            break;
        case 4:
            system("cls");
            Ficha4();
            break;
        case 5:
            system("cls");
            Ficha5();
            break;
        default:
            printf("\nFicha indisponivel\nEscolha as que estao disponiveis\n", opcao);
            sleep(4);
            system("cls");
            return main();

    }

    if(voltar) {
        system("cls");
        return main();
    }

}

