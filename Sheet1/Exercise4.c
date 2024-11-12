#include <stdio.h>

/*
4.Suponha que pretende calcular a nota final da disciplina de Introdução à Programação, que é
obtida com base em dois testes intercalares e um exame final. Desenvolva o algoritmo,
considerando que os testes e o exame foram cotados para um total de vinte valores, em que cada
um dos dois testes vale 2 valores e o exame vale 16 valores.
*/

int main(){

    float nota1;
    float nota2;
    float nota_exame;
    float nota_final;

    printf("\n*** INTRODUCAO A PROGRAMACAO ***\n\n");

    do {
        printf("Nota do 1º teste (0 a 20): ");
        scanf("%f", &nota1);
    } while(nota1 < 0 || nota1 > 20);
    
    do {
        printf("Nota do 2º teste (0 a 20): ");
        scanf("%f", &nota2);
    } while(nota2 < 0 || nota2 > 20);

    do {
        printf("Nota do exame (0 a 20): ");
        scanf("%f", &nota_exame);
    } while(nota_exame < 0 || nota_exame > 20);
    

    nota1 = (nota1 * 2) / 20;
    nota2 = (nota2 * 2) / 20;
    nota_exame = (nota_exame * 16) / 20;

    nota_final = nota1 + nota2 + nota_exame;
    printf("Nota final = %.2f valores", nota_final);

    return 0;
}