#include "listalinear.h"

int main(){

    Lista * A = Nova_listalinear(3); //lista A com capaciade de 5 elementos

    InserirElemento(A, 2);
    InserirElemento(A, 6);
    InserirElemento(A, 7);

    ImprimeLista(A);

    RemoveElemento(A, 6);

    ImprimeLista(A);

    InserirElemento(A, 10);
    InserirElemento(A, 15);

    ImprimeLista(A);

    ExpandeLista(A, 4);

    InserirElemento(A, 15);

    ImprimeLista(A);

    FreeLista(A);

    return 0;
}