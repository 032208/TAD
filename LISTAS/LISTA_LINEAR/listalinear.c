#include "listalinear.h"
#include <stdio.h>
#include <stdlib.h>

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

void RemoveElemento(Lista * nova_LL, int n){
    //encontra o elemento
    int pos = -1;
    for(int i=0; i<nova_LL->n_elementos; i++){
        if(nova_LL->elementos[i]== n){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        printf("Elemento %d não encontrado na lista.\n", n);
        return;
    }

    for(int i = pos; i<nova_LL->n_elementos-1; i++){
        nova_LL->elementos[i] = nova_LL->elementos[i+1];
    }
    (nova_LL->n_elementos)--;
    printf("Elemento %d removido com sucesso.\n", n);
}

void ExpandeLista(Lista * nova_LL, int nova_capacidade){

    int *novo_elemento = realloc(nova_LL->elementos, sizeof(int)*nova_capacidade);

    if (novo_elemento == NULL) {
        printf("Erro ao expandir a lista. Memória insuficiente.\n");
        return;
    }

    nova_LL->elementos = novo_elemento;
    nova_LL->capacidade = nova_capacidade;

    printf("Capacidade da lista atualizada para %d elementos.\n", nova_capacidade);
}

void FreeLista(Lista * nova_LL){
    free(nova_LL->elementos);
    free(nova_LL);
    printf("Memoria liberada.\n");
}