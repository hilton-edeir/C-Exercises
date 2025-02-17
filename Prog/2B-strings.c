// Programação 2024/25
// Aula Prática 2B - Strings

#include <stdio.h>
#include <string.h>

// Exercicio 6
// Recebe string
// Mostra na consola a string escrita por ordem inversa
// A função não recebe o número de caracteres da strings, pelo que essa é a sua primeira tarefa
void printInv(char s[]){
    int i;

    for(i=0; s[i]!='\0'; i++)
        ;
    i--;

    // Possivel alternativa ao código que surge nas linhas anteriores: i = strlen(s)-1;

    while(i>=0)
        putchar(s[i--]);
}

// Exercicio 7
// Recebe string
// Mostra na consola as várias palavras da string, uma em cada linha
void printPal(char s[]){
    int i = 0;

    while(s[i] != '\0') {
        if(s[i] == ' ') {
            printf("\n");
        } 
        else {
            printf("%c", s[i]);
        }

        i++;
    }
}

void analisar_frases(char f1[], char f2[], char f3[]) {
    if(strcmp(f1, f2) == 0) strcpy (f3, "Conteudo"" igual");
    else if(strlen(f1) == strlen(f2)) strcpy(f3, "Tamanho Igual");
    else if(strcmp(f1, f2) < 0) {
        strcpy(f3, f1);
        strcat(f3, f2);
    }
    else {
        strcpy(f3, f2);
        strcpy(f3, f1);
    }

    return;
}


int main(){
    char st1[15] = "Ola Mundo!";

    printInv(st1);

    printPal(st1);

    return 0;
}