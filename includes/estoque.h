typedef struct{
    int id;
    int ano;
    int velocidade;
    float preco;
    char cor[20];
    char modelo[50];
    char marca[50];
} Carro;

// Lista todos os carros cadastrados
void listarCarros(Carro carros[], int total);

// Busca um carro por ID
int buscarCarroPorId(Carro carros[], int total, int id);

// atualizar um carro por id
void atualizarCarro(Carro carros[], int total, int id);

// deletar carro por id
void deletarCarro(Carro carros[], int total, int id);

// casdatrar carro
void cadastrarCarro(Carro carros[], int *total);