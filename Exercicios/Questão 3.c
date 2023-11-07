#include <stdio.h>
#include <string.h>

void lerMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(int A[4][4], int B[4][4]) {
    int resultado[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }

    imprimirMatriz(resultado);
}

void subtrairMatrizes(int A[4][4], int B[4][4]) {
    int resultado[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = A[i][j] - B[i][j];
        }
    }

    imprimirMatriz(resultado);
}

void multiplicarMatrizes(int A[4][4], int B[4][4]) {
    int resultado[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    imprimirMatriz(resultado);
}

int main() {
    int A[4][4], B[4][4];
    char operacao[5];

    lerMatriz(A);
    lerMatriz(B);
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somarMatrizes(A, B);
    } else if (strcmp(operacao, "sub") == 0) {
        subtrairMatrizes(A, B);
    } else if (strcmp(operacao, "mult") == 0) {
        multiplicarMatrizes(A, B);
    } else {
        printf("Operação inválida\n");
    }

    return 0;
}
