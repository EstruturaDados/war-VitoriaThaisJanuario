#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

//Definição da estrutura Terittório
typedef struct {
    char nome[50];
    char corExercito[10];
    int tropas;
} Território;

int main() {
    Territorio territorios[QTD_TERRITORIOS];

    printf("=== Quantidade de Territorios ===");

// Cadastro dos 5 territórios
for (int i= 0; i< QTD_TERRITORIOS; i++) {
    printf("Territorio %d:\n", i +1);

    printf("Nome do territorio: ");
    scanf(" %[^\n]", territorios[i].nome);  //le string com espaço

    printf("Cor do exercito: ");
    scanf(" %[^\n]", territorios[i].corExercito);

    printf("Quantidade de tropas: ");
    scanf("d, &territorios[i].tropas);

    printf("\n")
    }

//Exibição dos dados cadastrados
print("\n=== Territorios Cadastrados ===\n");
for (int i =0 <QTD_TERRITORIOS; i + 1) {
    printf("\nTerritorio %d:\n", i +1);
    printf("Nome: %s\n", territorios[i].nome);
    printf("Cor do exercito : %s\n", territorios[i].corExercito);
    printf("Quantidade de tropas: %d\n", territorios[i].tropas);
}
 return 0;
}












// Função utilitária para limpar o buffer de entrada do teclado (stdin), evitando problemas com leituras consecutivas de scanf e getchar.
