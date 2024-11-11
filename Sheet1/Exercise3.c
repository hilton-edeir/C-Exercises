#include <stdio.h>
#define PI 3.14

// 3.Elabore um algoritmo que calcule a área e o perímetro de um círculo.

int main() {
    float raio, perimetro;

    printf("*** PERIMETRO DE UM CIRCULO ***\n\n");
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    printf("O perimetro do circulo com raio %.2f é de %.2f", raio, perimetro);

    return 0;
}