#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char posicao;
    int forca;
} Jogador;

void lerJogadores(Jogador time[], char nomeTime[]) {
    printf("Digite o nome do time %s: ", nomeTime);
    scanf("%s", nomeTime);
    for (int i = 0; i < 11; i++) {
        printf("Digite o nome do jogador, posição e força, separados por ponto e vírgula (Ex: Cristiano Ronaldo;A;95): ");
        scanf("%s ;%c ;%d", time[i].nome, &time[i].posicao, &time[i].forca);
    }
}

double calcularForcaPonderada(Jogador time[]) {
    double forcaPonderada = 0;
    for (int i = 0; i < 11; i++) {
        switch (time[i].posicao) {
            case 'G':
                forcaPonderada += 8 * time[i].forca;
                break;
            case 'L':
            case 'Z':
                forcaPonderada += 10 * time[i].forca;
                break;
            case 'V':
            case 'M':
                forcaPonderada += 5 * time[i].forca;
                break;
            case 'A':
                forcaPonderada += 12 * time[i].forca;
                break;
            default:
                printf("Posição de jogador inválida.\n");
        }
    }
    return forcaPonderada / 100;
}

int main() {
    Jogador time1[11], time2[11];
    char nomeTime1[50], nomeTime2[50];
    double forcaTime1, forcaTime2;

    lerJogadores(time1, nomeTime1);
    lerJogadores(time2, nomeTime2);

    forcaTime1 = calcularForcaPonderada(time1);
    forcaTime2 = calcularForcaPonderada(time2);

    printf("Força ponderada do time %s: %.2lf\n", nomeTime1, forcaTime1);
    printf("Força ponderada do time %s: %.2lf\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2) {
        printf("O time %s é o mais forte.\n", nomeTime1);
    } else if (forcaTime2 > forcaTime1) {
        printf("O time %s é o mais forte.\n", nomeTime2);
    } else {
        printf("Os times têm força igual.\n");
    }

    return 0;
}
