#ifndef __LISTALINEAR_H__
#define __LISTALINEAR_H__
#include <stdlib.h>

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

#endif