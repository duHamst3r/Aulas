#include <stdio.h>

int main() {
    char nivel;
    float salario, aumento, salario_atualizado;

    // Leitura do nível de experiência
    printf("Digite o nível de experiência (a, b ou c): ");
    scanf(" %c", &nivel); // Usamos um espaço antes de %c para ignorar espaços em branco e quebras de linha

    // Leitura do salário
    // printf("Digite o salário atual: "); // Linha removida
    scanf("%f", &salario);

    // Calcula o aumento com base no nível de experiência
    switch (nivel) {
        case 'a':
            aumento = 0.05;
            break;
        case 'b':
            aumento = 0.07;
            break;
        case 'c':
            aumento = 0.08;
            break;
        default:
            printf("Nível de experiência inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Calcula o salário atualizado
    salario_atualizado = salario + (salario * aumento);

    // Exibe o salário atualizado com 2 casas decimais
    printf("Salário atualizado: %.2f\n", salario_atualizado);

    return 0;
}
