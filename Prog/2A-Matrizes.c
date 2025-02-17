// Programação 2024/25
// Aula Prática 2A - Matrizes

#include <stdio.h>
#include <stdbool.h>

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Mostra na consola os valores armazenados na matriz
void printMat(int mat[][3], int nLin){
    int i, j;

    for(i=0; i<nLin; i++){
        for(j=0; j<3; j++)
            printf("%d\t", mat[i][j]);
        putchar('\n');
    }
}

bool primo(int numero) {
    int divisor = 0;

    for(int i = 1; i <= numero / 2; i++) {
        if(numero % i == 0) 
            divisor++;
    }

    if(divisor > 2)
        return true;

    return false;
}

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Preenche a matriz de acordo com as regras definidas nos exercícios 2 e 3 da ficha prática 2
void preencheMat(int mat[][3], int nLin){
    int i;

    for(i = 0;  i < nLin; i++) {
        do {
            printf("Colun 1 linha %d: ", i + 1);
            scanf("%d", &mat[i][0]);
        }
        while(mat[i][0] <= 1 || mat[i][0] > 100 || primo(mat[i][0]));
    
        mat[i][1] = mat[i][0] * mat[i][0];
        mat[i][2] = mat[i][0] * mat[i][0] * mat[i][0];
    }

}

int main() {
    int m1[4][3] = {{1,2,3},{6,7,8},{10,11,12},{20,30,40}};
    int m2[10][3] = {0};

    printMat(m1, 4);

    // Chamada da função dos exercicios 2 e 3
    preencheMat(m2, 10);
    printf("\nMatriz preenchida:\n");
    printMat(m2, 10);

    return 0;
}
