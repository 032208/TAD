#include "listalinear.h"
#include <stdio.h>

Lista * Nova_listalinear(int capacidade){
    Lista * nova_LL = NULL;
    nova_LL = (Lista*)calloc(1, sizeof(Lista)); //aloca memória para a nova lista
    //inicializa os campos da estrutura na nova lista
    nova_LL->n_elementos = 0; //lista começa sem nenhum elemento 
    nova_LL->elementos = (int*)calloc(1, sizeof(int)); //aloca memória para os elementos da lista
    nova_LL->capacidade = capacidade;
    return nova_LL;
}

void InserirElemento(Lista * nova_LL, int n){
    if(nova_LL->n_elementos < nova_LL->capacidade){ //verifica se há espaço para inserir o elemento
        nova_LL->elementos[nova_LL->n_elementos] = n;
        (nova_LL->n_elementos)++;
        printf("Insercao feita com sucesso.\n");
    }else{
        printf("Lista cheia, nao foi possivel inserir o valor %d. \n", n);
    }
}

void ImprimeLista(Lista * nova_LL){
    printf("Lista impressa: \n[");
    for(int i=0; i<nova_LL->n_elementos; i++){
        printf("%d, ", nova_LL->elementos[i]);
    }
    printf("]\n");
}