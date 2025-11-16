typedef struct{
    int id;
    int ano;
    int velocidade;
    float preco;
    char cor[20];
    char modelo[50];
    char marca[50];
} Carro;

void listarCarros(Carro carros[], int total);
int buscarCarroPorId(Carro carros[], int total, int id);
void atualizarCarro(Carro carros[], int total, int id);
void deletarCarro(Carro carros[], int *total, int id);
void cadastrarCarro(Carro carros[], int *total);
