#include <stdio.h>

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