#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "../includes/estoque.h"

#define MAX 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    Carro carros[MAX];
    int total = 0;
    int opcao;
    int id;

    do {
        printf("\n=== SISTEMA DE ESTOQUE DE CARROS ===\n");
        printf("1 - Adicionar carro\n");
        printf("2 - Listar carros\n");
        printf("3 - Atualizar carro\n");
        printf("4 - Remover carro\n");
        printf("5 - Ver carro especifico\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrarCarro(carros, &total);
                break;

            case 2:
                listarCarros(carros, total);
                break;

            case 3:
                printf("\nInforme o ID: ");
                scanf("%d", &id);
                if(atualizarCarro(carros, total, id)){
                    printf("Carro atualizado com sucesso!\n");
                }else{
                    printf("Carro não encontrado");
                }
                break;

            case 4:
                printf("\nInforme o ID: ");
                scanf("%d", &id);
                if(deletarCarro(carros, &total, id)){
                    printf("Carro removido com sucesso\n");
                }else{
                    printf("carro não encontrado\n");
                }
                break;

            case 5:
                printf("\nInforme o ID: ");
                scanf("%d", &id);
                if(!buscarCarroPorId(carros, total, id)){
                    printf("carro não encontrado\n");
                    return;
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
