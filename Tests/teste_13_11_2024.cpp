#include <stdio.h>

int main() {
    int numero_aluno;
    char nome_alimento;
    int quant_alimento;
    float valor_medio = 0;
    int total_alunos = 0;
    float total_alimentos_doados = 0;
    int aluno_maior_doador = 0;
    int quantidade_maior = 0;

    do {
        printf("Insira o numero do aluno (0 para sair): ");
        scanf("%d", &numero_aluno);
        getchar(); // ou fflush(stdin)

        if(numero_aluno == 0) {
            printf("\nTotal de alimentos doados: %.2f Euros", total_alimentos_doados);
            printf("\nValor medio: %.2f", valor_medio);
            printf("\nAluno com maior doacao: %d", aluno_maior_doador);
            break;
        }
        else {
            if(numero_aluno < 0 || numero_aluno > 9999) {
                printf("Numero de aluno invalido!\n");
            }
            else {
                do {
                    printf("Nome do alimento (a, l ou m): ");
                    scanf("%c", &nome_alimento);
                    getchar(); // ou fflush(stdin)
                } while(nome_alimento != 'a' && nome_alimento != 'A' && nome_alimento != 'l' && nome_alimento != 'L' && nome_alimento != 'm' && nome_alimento != 'M');

                printf("Quantidade: ");
                scanf("%d", &quant_alimento);

                if(quantidade_maior < quant_alimento) {
                    quantidade_maior = quant_alimento;
                    aluno_maior_doador = numero_aluno;
                }

                total_alunos = total_alunos + 1;

                if(nome_alimento == 'a' || nome_alimento == 'A') {
                    total_alimentos_doados = total_alimentos_doados + (1.75 * quant_alimento);
                }
                else if(nome_alimento == 'l' || nome_alimento == 'L') {
                    total_alimentos_doados = total_alimentos_doados + (1.05 * quant_alimento);
                }
                else {
                    total_alimentos_doados = total_alimentos_doados + (1.04 * quant_alimento);
                }

                valor_medio = total_alimentos_doados / total_alunos;
            }
        }
    } while(numero_aluno >= 0);

    return 0;
}