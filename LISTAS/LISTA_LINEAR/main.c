#include "listalinear.h"

int main(){

    Lista * A = Nova_listalinear(2); //lista A com capaciade de 5 elementos

    InserirElemento(A, 2);
    InserirElemento(A, 6);
    InserirElemento(A, 7);

    ImprimeLista(A);

    return 0;
}