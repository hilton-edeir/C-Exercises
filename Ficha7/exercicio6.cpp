#include <stdio.h>
#include <string.h>
#define TAM 100


int alterar_frase(char str[], int tam, char c) {
    int i = 0;
    int altera = 0;
    char str_duplicado[tam];

    while(str[i] != '\0') {
        if(str[i] == c) 
            if(strlen(str) < tam - 1) {
                i++;
                for(int j = strlen(str); j >= i; j--) 
                    str[j + 1]  = str[j];

                str[i] = c;
                altera = 1;
            }
        i++;
    }

    return altera;
}


int main() { 
    char frase[TAM];
    char caractere;

    printf("*** ALTERAR FRASE ***\n\n");

    printf("Insira a sua frase: ");
    gets(frase);
    printf("Insira o caractere: ");
    scanf("%c", &caractere);

    if(alterar_frase(frase, TAM, caractere))
        printf("A frase foi alterada\n");
    else
        printf("A frase nao foi alterada\n");

    puts(frase);

    return 0;
}