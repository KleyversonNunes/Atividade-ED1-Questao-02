typedef struct TipoCelula *TipoApontador;
typedef struct TipoItem
{
    int Chave;
}TipoItem;

typedef struct TipoCelula
{
    TipoItem Item;
    TipoApontador Prox;
}TipoCelula;

typedef struct TipoFila
{
    TipoApontador Frente, Tras;
}TipoFila;

void FFVazia(TipoFila *);
int Vazia(TipoFila);
TipoFila* cria();
void Enfileira(TipoItem,TipoFila *);
void Desenfileira(TipoFila *,TipoItem *);
void Imprime(TipoFila);

// Pilha
typedef struct
{
    TipoApontador Fundo, Topo;
    int Tamanho;
}TipoPilha;

void FPVazia(TipoPilha *);
int PVazia(TipoPilha);
TipoPilha* criaPilha();
void Empilha(TipoItem,TipoPilha *);
void Desempilha(TipoPilha *,TipoItem *);
int Tamanho(TipoPilha);
void ImprimePilha(TipoPilha);
