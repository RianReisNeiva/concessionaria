#include <stdio.h>
#include <string.h>
#include "estoque.h"

void listarCarros(Carro carros[], int total) {
    if (total == 0) {
        printf("\nNenhum carro cadastrado.\n");
        return;
    }

    printf("\n=== LISTA DE CARROS ===\n");

    for (int i = 0; i < total; i++) {
        printf("ID: %d\n", carros[i].id);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Marca: %s\n", carros[i].marca);
        printf("Cor: %s\n", carros[i].cor);
        printf("Ano: %d\n", carros[i].ano);
        printf("Velocidade: %d km/h\n", carros[i].velocidade);
        printf("Preço: R$ %.2f\n", carros[i].preco);
        printf("-----------------------------\n");
    }
}


int buscarCarroPorId(Carro carros[], int total, int id) {
    for (int i = 0; i < total; i++) {
        if (carros[i].id == id) {
            return i; // posição encontrada
        }
    }
    return -1;
}


void atualizarCarro(Carro carros[], int total, int id) {
    int pos = buscarCarroPorId(carros, total, id);

    if (pos == -1) {
        printf("Carro não encontrado!\n");
        return;
    }

    printf("Atualizando carro ID %d:\n", id);

    printf("Novo modelo: ");
    scanf("%s", carros[pos].modelo);

    printf("Nova marca: ");
    scanf("%s", carros[pos].marca);

    printf("Nova cor: ");
    scanf("%s", carros[pos].cor);

    printf("Novo ano: ");
    scanf("%d", &carros[pos].ano);

    printf("Nova velocidade: ");
    scanf("%d", &carros[pos].velocidade);

    printf("Novo preço: ");
    scanf("%f", &carros[pos].preco);

    printf("Carro atualizado com sucesso!\n");
}

void deletarCarro(Carro carros[], int total, int id) {
    int pos = buscarCarroPorId(carros, total, id);

    if (pos == -1) {
        printf("Carro não encontrado!\n");
        return;
    }

    for (int i = pos; i < total - 1; i++) {
        carros[i] = carros[i + 1];
    }

    printf("Carro removido com sucesso!\n");
}

void cadastrarCarro(Carro carros[], int *total) {

    Carro novo;

    printf("ID do carro: ");
    scanf("%d", &novo.id);

    printf("Modelo: ");
    scanf("%s", novo.modelo);

    printf("Marca: ");
    scanf("%s", novo.marca);

    printf("Cor: ");
    scanf("%s", novo.cor);

    printf("Ano: ");
    scanf("%d", &novo.ano);

    printf("Velocidade: ");
    scanf("%d", &novo.velocidade);

    printf("Preço: ");
    scanf("%f", &novo.preco);

    carros[*total] = novo;
    (*total)++;

    printf("Carro cadastrado com sucesso!\n");
}
