#ifndef __LISTALINEAR_H__
#define __LISTALINEAR_H__

typedef struct _listalinear
{
    int n_elementos;
    int * elementos;
    int capacidade;
}Lista;

//criar uma nova lista
Lista * Nova_listalinear(int capacidade);

//inerir elementos na lista
void InserirElemento(Lista * nova_LL, int n);

//imprime os elementos da lista
void ImprimeLista(Lista * nova_LL);

//remover um elemento da lista
void RemoveElemento(Lista * nova_LL, int n);

//expande a capacidade de armazenamento da lista
void ExpandeLista(Lista * nova_LL, int nova_capacidade);

//libera mémoria da lista
void FreeLista(Lista * nova_LL);

#endif