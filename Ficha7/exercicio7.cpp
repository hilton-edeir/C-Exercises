#include <stdio.h>
#include <string.h>
#define TAMFRASE 100
#define TAMPAL 15


int substituir_palavra(char frase[], char palavra[], int tamanho_frase, int tamanho_palavra) {
    int fim_palavra;
    int inicio_palavra;
    int i = 0;

    for(i = strlen(frase) - 1; frase[i] == ' ' && i >= 0; i-- );
    fim_palavra = i;

    for(; frase[i] != ' ' && i >= 0; i--);
    inicio_palavra = i + 1;

    if((fim_palavra - inicio_palavra) >= strlen(palavra) - 1) {
        for( ) {
            /* code */
        }
        

    }

}


int main() { 
    
    return 0;
}