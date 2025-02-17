// Programação 2024/25
// Aula Prática 1

#include <stdio.h>

// Recebe: Tabela de inteiros a com tamanho tam
// Mostra na consola os valores armazenados na tabela
void mostraTab(int a[], int tam){
    int i;

    for(i=0; i<tam; i++)
        printf("%d\t", a[i]);
    putchar('\n');
}

// Exercicio 1
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve maior valor armazenado na tabela
int maior(int a[], int tam){
    int i, m = a[0];
    for(i=1; i<tam; i++)
        if(a[i] > m)
            m = a[i];
    return m;
}

// Exercicio 2
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve posição do maior valor armazenado na tabela
int posMaior(int a[], int tam){
    return -1;
}

// Exercicio 3
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve número de ocorrências do maior valor na tabela
int contaMaior(int a[], int tam) {
    int contador = 0;
    int i;
    int maior_numero = maior(a, tam);

    for(i=0; i < tam; i++) {
        if(a[i] == maior_numero)
            contador++;
    }

    return contador;
}


// Exercicio 4
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve o elemento mais comum da tabela
int maisComum(int a[], int tam){
    return 0;
}


void inverter(int a[], int tam) {
    int i;
    int memory;

    for(i = 0; i < tam / 2; i++) {
        memory = a[i];
        a[i] = a[tam - 1 - i];
        a[tam - 1 - i] = memory;
    }

    mostraTab(a, tam);
}

void deslocar(int a[], int tam) {
    int i;
    int memory = a[0];

    for(i = 0; i < tam - 1; i++)
        a[i] = a[i+1];
    
        a[tam - 1] = memory;

    mostraTab(a, tam);
}


int main(){

    int tab1[8] = {3, 6, 8, 8, 10, 1, 4, 2};
    int tab2[6] = {5, 5, 5, 9, 1, 9};

    printf("Tabela 1:\n");
    mostraTab(tab1, 8);
    printf("Maior: %d\n", maior(tab1, 8));
    printf("Pos Maior: %d\n", posMaior(tab1, 8));
    printf("Conta Maior: %d\n", contaMaior(tab1, 8));
    printf("Mais comum: %d\n\n", maisComum(tab1, 8));

    printf("Tabela 2:\n");
    mostraTab(tab2, 6);
    printf("Maior: %d\n", maior(tab2, 6));
    printf("Pos Maior: %d\n", posMaior(tab2, 6));
    printf("Conta Maior: %d\n", contaMaior(tab2, 6));
    printf("Mais comum: %d\n\n", maisComum(tab2, 6));

    printf("\nInverter\n");
    inverter(tab1, 8);

    printf("\nDeslocar\n");
    inverter(tab1, 8);

    return 0;
}
