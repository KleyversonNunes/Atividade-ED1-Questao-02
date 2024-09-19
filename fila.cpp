#include <iostream>
#include "fila.h"

using namespace std;

// Fila
void FFVazia(TipoFila *Fila)
{
    Fila->Frente = (TipoApontador)malloc(sizeof(TipoCelula));
    Fila->Tras = Fila->Frente;
    Fila->Frente->Prox = NULL;
}

int Vazia(TipoFila Fila)
{
    return (Fila.Frente == Fila.Tras);
}

TipoFila* cria()
{
    TipoFila *f = (TipoFila*)malloc(sizeof(TipoFila));
    f->Frente = NULL;
    f->Tras = NULL;
    return f;
}

void Enfileira(TipoItem x,TipoFila *Fila)
{
    Fila->Tras->Prox = (TipoApontador)malloc(sizeof(TipoCelula));
    Fila->Tras = Fila->Tras->Prox;
    Fila->Tras->Item = x;
    Fila->Tras->Prox = NULL;
}

void Desenfileira(TipoFila *Fila,TipoItem *Item)
{
    TipoApontador q;
    if(Vazia(*Fila)) { cout << "Erro fila esta vazia" << endl; return; }
    q = Fila->Frente;
    Fila->Frente = Fila->Frente->Prox;
    *Item = Fila->Frente->Item;
    free(q);
}

void Imprime(TipoFila Fila)
{
    TipoApontador Aux;
    Aux = Fila.Frente -> Prox;
    while(Aux != NULL)
    {
        cout << Aux->Item.Chave << " ";
        Aux = Aux->Prox;
    }
    cout << "\n" << endl;
}

// Pilha
void FPVazia(TipoPilha *Pilha)
{
    Pilha->Topo = (TipoApontador)malloc(sizeof(TipoCelula));
    Pilha->Fundo = Pilha->Topo;
    Pilha->Topo->Prox = NULL;
    Pilha->Tamanho = 0;
}

int PVazia(TipoPilha Pilha)
{
    return (Pilha.Topo == Pilha.Fundo);
}

TipoPilha* criaPilha()
{
    TipoPilha* p  = (TipoPilha*)malloc(sizeof(TipoPilha));
    p->Topo = NULL;
    return p;
}

void Empilha(TipoItem x,TipoPilha *Pilha)
{
    TipoApontador Aux;
    Aux = (TipoApontador)malloc(sizeof(TipoCelula));
    Pilha->Topo->Item = x;
    Aux->Prox = Pilha->Topo;
    Pilha->Topo = Aux;
    Pilha->Tamanho++;
}

void Desempilha(TipoPilha *Pilha,TipoItem *Item)
{
    TipoApontador q;
    if(PVazia(*Pilha))
    {
        cout << "Erro: lista vazia" << endl;
        return;
    }
    q = Pilha->Topo;
    Pilha->Topo = q->Prox;
    *Item = q->Prox->Item;
    free(q);
    Pilha->Tamanho--;
}

int Tamanho(TipoPilha Pilha)
{
    return (Pilha.Tamanho);
}

void ImprimePilha(TipoPilha Pilha)
{
    TipoApontador Aux;
    Aux = Pilha.Topo -> Prox;
    while(Aux != NULL)
    {
        cout << Aux->Item.Chave << " ";
        Aux = Aux->Prox;
    }
    cout << "\n" << endl;
}
