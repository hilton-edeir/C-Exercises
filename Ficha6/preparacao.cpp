#include <stdio.h>
#define tam 4


void func(char VC[], int VI[], int n) {
    int i;
    int j;
    int repeticao;

    printf("\n---- Imprimir VC ----\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < VI[i]; j++) {
            printf("\nVC[%d]: %c", i, VC[i]);
        }
    }
}

int main() {
    char VC[tam];
    int VI[tam];
    int i;

    printf("\n---- Preencher VC ----\n");
    for(i = 0; i < tam; i++) {
        printf("VC[%d]: ", i);
        scanf("%c", &VC[i]);
        getchar();
    }

    printf("\n---- Preencher VI ----\n");
    for(i = 0; i < tam; i++) {
        printf("VI[%d]: ", i);
        scanf("%d", &VI[i]);
    }

    func(VC, VI, tam);

    printf("\n\n");
    return 0;
}