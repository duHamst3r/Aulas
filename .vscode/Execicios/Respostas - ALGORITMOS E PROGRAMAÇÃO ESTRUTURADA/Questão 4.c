#include <stdio.h>

int main() {
    char nivel;
    float salario, aumento, salario_atualizado;

    // Leitura do nível de experiência
    printf("Digite o nível de experiência (a, b ou c): ");
    scanf(" %c", &nivel);

    // Leitura do salário
    scanf("%f", &salario);

    // Calcular o aumento com base no nível de experiência
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
        
        //caso não inserir o nivel de experiência informar a seguinte mensagem
            printf("Nível de experiência inválido.\n");
            return 1; 
         
    }

    // Calcular o salário atualizado
    salario_atualizado = salario + (salario * aumento);

    // Exibir o salário atualizado com 2 casas decimais
    printf("Salário atualizado: %.2f\n", salario_atualizado);

    return 0;
}
