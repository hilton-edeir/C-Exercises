#include <stdio.h>
#define PI 3.14

// 3.Elabore um algoritmo que calcule a área e o perímetro de um círculo.

int main() {
    float raio, perimetro;

    printf("\n*** PERIMETRO DE UM CIRCULO ***\n\n");
    
    do {
        printf("Insira o raio do circulo (cm): ");
        scanf("%f", &raio);

        if(raio <= 0)
            printf("O raio tem que ser maior que 0!\n");

    } while(raio <= 0);
    

    perimetro = 2 * PI * raio;
    printf("O perimetro do circulo com raio %.2f é de %.2f cm", raio, perimetro);

    return 0;
}