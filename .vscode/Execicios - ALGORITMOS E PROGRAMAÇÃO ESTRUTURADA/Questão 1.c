#include <stdio.h>

int main() {
    int ano;
    int copa_mundo = 0;
    int olimpiadas_verao = 0;

    // Solicita ao usuário que insira um ano
    printf("Digite um ano entre 1800 e 2022: ");
    scanf("%d", &ano);

    // Verifica se o ano está dentro do intervalo especificado
    if (ano >= 1800 && ano <= 2022) {
        // Verifica se ocorreram Jogos Olímpicos de Verão (da Era Moderna)
        if (ano >= 1896 && (ano - 1896) % 4 == 0) {
            olimpiadas_verao = 1;
        }

        // Verifica se ocorreu a Copa do Mundo de Futebol
        if (ano >= 1930 && (ano - 1930) % 4 == 0) {
            copa_mundo = 1;
        }

        // Exibe a mensagem apropriada com base nos eventos ocorridos ou não ocorridos
        if (olimpiadas_verao && copa_mundo) {
            printf("Ocorreram os Jogos Olímpicos de Verão e a Copa do Mundo de Futebol no ano de %d.\n", ano);
        } else if (olimpiadas_verao) {
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
        } else if (copa_mundo) {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
        } else {
            printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.\n", ano);
        }
    } else {
        printf("Ano fora do intervalo especificado.\n");
    }

    return 0;
}
