#include <stdio.h>

int main() {
    int N;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    // Verifique se o número é ímpar ou par
    if (N % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    // Calcule a soma dos dígitos
    int soma = 0;
    int temp = N;
    while (temp != 0) {
        soma += temp % 10;
        temp /= 10;
    }

    printf("A soma dos algarismos é: %d\n", soma);

    return 0;
}
