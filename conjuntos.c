//desenvolve as funções

#include "conjuntos.h"
#include <stdlib.h>

Conjuntos * novo_conjunto(void){
    return (Conjuntos*)calloc(1, sizeof(Conjuntos));
}