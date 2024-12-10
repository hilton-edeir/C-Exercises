#include <stdio.h>

int main() {
    int numero;
    int tamanho_vetor;
    int auxiliar;
    int vetor[tamanho_vetor];
    int i = 0;

    printf("*** NUMERO CAPICUA ***\n\n");

    do {
        printf("Insira um numero inteiro: ");
        scanf("%d", &tamanho_vetor);

        printf("Insira um numero inteiro: ");
        scanf("%d", &numero);

    } while(numero <= 0 && tamanho_vetor <= 0);

    auxiliar = numero;

    while(numero > 0) {
        vetor[i] = numero % 10;
        numero = numero / 10;
        i++;
    }
    
    //for(i = 0; i < );

    return 0;
}









/*




#include <stdio.h>

// Função para verificar se um número é capicua
int ehCapicua(int numero) {
    int reverso = 0, original, digito;

    // Armazenar o valor original do número
    original = numero;

    // Calcular o reverso do número
    while (numero > 0) {
        digito = numero % 10;          // Obter o último dígito
        reverso = reverso * 10 + digito; // Adicionar o dígito ao reverso
        numero /= 10;                  // Remover o último dígito
    }

    // Comparar o número original com seu reverso
    return original == reverso;
}

int main() {
    int numero;

    // Pedir ao usuário para inserir um número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é positivo
    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    // Verificar se o número é capicua
    if (ehCapicua(numero)) {
        printf("O número %d é capicua.\n", numero);
    } else {
        printf("O número %d não é capicua.\n", numero);
    }

    return 0;
}
*/