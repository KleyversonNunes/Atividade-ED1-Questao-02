#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fila.cpp"

using namespace std;

int main()
{
    int n = 8;;
    TipoItem x,res,y;
    

    // Criando e inializando as filas
    TipoFila *F_Pares;
    F_Pares = cria();
    TipoFila *F_Impares;
    F_Impares = cria();

    // Esvaziando as listas
    FFVazia(F_Pares);
    FFVazia(F_Impares);

    // Criando e inicializando a pilha
    TipoPilha *P_Numeros;
    P_Numeros = criaPilha();

    // Esvaziando a pilha
    FPVazia(P_Numeros);

    // Entrada de dados
    while(n != 0)
    {
        scanf("%d",&n);
        x.Chave = n;
        if(n%2==0)
        {
            Enfileira(x,F_Pares);
        }
        else{
            Enfileira(x,F_Impares);
        }
    };
    system("cls");
    

    cout << "Lista de Pares" << endl;
    Imprime(*F_Pares);

    cout << "Lista de Impares" << endl;
    Imprime(*F_Impares);
    
    while(!Vazia(*F_Pares) || !Vazia(*F_Impares))
    {
        if(!Vazia(*F_Impares))
        {
            Desenfileira(F_Impares,&res);
            if(res.Chave > 0)
            {
                Empilha(res,P_Numeros);
            }
            else
            {
                Desempilha(P_Numeros,&y);
            }
        }

        if(!Vazia(*F_Pares))
        {
            Desenfileira(F_Pares,&res);
            if(res.Chave > 0)
            {
                Empilha(res,P_Numeros);
            }
            else
            {
                Desempilha(P_Numeros,&y);
            }
        }
    }

    cout << "\nLista de Pares" << endl;
    Imprime(*F_Pares);

    cout << "Lista de Impares" << endl;
    Imprime(*F_Impares);

    cout << "\nPilha de numeros" << endl;
    ImprimePilha(*P_Numeros);

    return 0;
}
