#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

#define MAX 100

int main() {
    Carro carros[MAX];
    int total = 0;

    int opcao;

    do {
        printf("\n=== SISTEMA DE ESTOQUE DE CARROS ===\n");
        printf("1 - Adicionar carro\n");
        printf("2 - Listar carros\n");
        printf("3 - Atualizar carro\n");
        printf("4 - Remover carro\n");
        printf("5 - Ver carro\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                cadastrarCarro(carros, &total);
                break;
            case 2:
                listarCarros(carros, total);
                break;
            case 3:
                int id;
                printf("\nInforme o id\n");
                scanf("%d", id);
                atualizarCarro(carros, total, id);
                break;
            case 4:
                int id;
                printf("\nInforme o id\n");
                scanf("%d", id);
                deletarCarro(carros, &total, id);
                break;
            case 5:
                int id;
                printf("\nInforme o id\n");
                scanf("%d", id);
                buscarCarroPorId(carros, total, id);
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
