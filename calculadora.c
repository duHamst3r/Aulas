int main() {
    int valor1;
    int valor2;
    int resultado;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf(" %c", &operacao); // Coloque um espaço antes do %c para consumir espaços em branco deixados pela leitura anterior

    printf("Insira 2 valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2); // Corrigido: removido o erro na leitura de valor2

    printf("Operacao: %c\n", operacao);

    if (operacao == '+') {
        resultado = valor1 + valor2;
    } else if (operacao == '-') {
        resultado = valor1 - valor2;
    } else if (operacao == '*') {
        resultado = valor1 * valor2;
    } else if (operacao == '/') {
        if (valor2 != 0) { // Verifica divisão por zero
            resultado = valor1 / valor2;
        } else {
            printf("Erro: Divisao por zero!\n");
            return 1; // Encerra o programa com código de erro
        }
    } else if (operacao == '%') {
        resultado = valor1 % valor2;
    } else {
        printf("Operacao invalida!!!\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Resultado: %d\n", resultado);

    if (resultado > valor1 && resultado > valor2) {
        printf("Resultado %d e maior que %d e %d\n", resultado, valor1, valor2);
    } else if (resultado < valor1 && resultado < valor2) {
        printf("Resultado %d e menor que %d e %d\n", resultado, valor1, valor2);
    }


//SOMA: resultado = valor1 = valor2
//SUBTRACAO: resultado = valor1 - valor2
//MULTIPLICACAO: resultado = valor1 * valor2
//DIVISAO: resultado = valor1 / valor2
//RESTO: resultado = valor1 % valor2
//INCREMENTO: resultado = valor1==;
//DECREMENTO: resultado = valor1--;


    return 0;
}
