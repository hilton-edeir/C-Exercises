#include <stdio.h>

/*
15.Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado.
Deve ainda calcular e imprimir a seguinte informação:
• Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
• Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
• Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o utilizador só introduz os valores 3, 4 ou 5.
*/

int main() {
    float numero_lados;
    float perimetro;
    float area;

    printf("\n*** POLIGONO REGULAR ***\n\n");

    do {
        printf("Quantos lados tem o seu poligono? (3, 4 ou 5): ");
        scanf("%f", &numero_lados); //3
        
        if(numero_lados != 3 && numero_lados != 4 && numero_lados != 5)
            printf("\nNumero de lados invalido!\n");

    } while(numero_lados != 3 && numero_lados != 4 && numero_lados != 5);

    printf("\n---------------------------------\n");
    if(numero_lados == 3) {
        printf("TRIANGULO\nPerimetro = %.2f", numero_lados * 3);
    }
    else if(numero_lados == 4) {
        printf("QUADRADO\nArea = %.2f", numero_lados * numero_lados);
    }
    else {
        printf("PENTAGONO\n");
    }
    
    return 0;
}