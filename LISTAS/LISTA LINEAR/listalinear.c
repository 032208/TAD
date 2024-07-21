#include "listalinear.h"

Lista * nova_listalinear(int capacidade){
    Lista * nova_LL = (Lista*)calloc(1, sizeof(Lista)); //aloca memória para a nova lista
    //inicializa os campos da estrutura na nova lista
    nova_LL->n_elementos = 0; //lista começa sem nenhum elemento 
    nova_LL->elementos = (int*)calloc(1, sizeof(int)); //aloca memória para os elementos da lista
    nova_LL->capacidade = capacidade;
    return nova_LL;
}