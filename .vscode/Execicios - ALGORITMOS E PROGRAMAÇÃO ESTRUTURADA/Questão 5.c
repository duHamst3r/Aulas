#include <stdio.h>

int main() {
    int A, B;

    // Leitura dos valores inteiros A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Verificação se os valores são iguais
    if (A == B) {
        printf("Os valores lidos são iguais.\n");
    } else {
        // Encontre o maior valor
        int maior, menor;
        if (A > B) {
            maior = A;
            menor = B;
        } else {
            maior = B;
            menor = A;
        }

        // Verifique se o maior valor é múltiplo do menor valor
        if (maior % menor == 0) {
            printf("%d é maior que %d, %d é múltiplo de %d.\n", maior, menor, maior, menor);
        } else {
            printf("%d é maior que %d, %d nao é múltiplo de %d.\n", maior, menor, maior, menor);
        }
    }

    return 0;
}
