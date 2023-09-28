#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida;
    
    // Leitura da senha cadastrada
    printf("Digite a senha de 4 dígitos: ");
    scanf("%d", &senha_cadastrada);

    // Verifica se a senha cadastrada tem 4 dígitos
    if (senha_cadastrada < 1000 || senha_cadastrada > 9999) {
        printf("A senha cadastrada deve ter 4 dígitos.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Senha cadastrada: %04d\n", senha_cadastrada);
    
    while (1) {
        // Leitura da senha inserida
        printf("Digite a senha para validação: ");
        scanf("%d", &senha_inserida);
        
        // Verifica se a senha inserida é igual à senha cadastrada
        if (senha_inserida == senha_cadastrada) {
            printf("Senha válida!\n");
            break; // Encerra o programa com sucesso
        } else {
            printf("Senha inválida!\n");
        }
    }
    
    return 0;
}
