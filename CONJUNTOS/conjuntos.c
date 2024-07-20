//desenvolve as funções

#include "conjuntos.h"
#include <stdlib.h>

Conjuntos * novo_conjunto(void){
    return (Conjuntos*)calloc(1, sizeof(Conjuntos));
}

void set_delete( Conjuntos * c ) {
    free(c->elemento);
    free(c);
}

void set_print( Conjuntos * c ) {
    int k;
    printf("[ ");
    for(k=0; k<c->quantidade; k++) {
        printf("%d, ", c->elemento[k] );
    }
    printf("]\n");
}

bool set_add( Conjuntos * c, int v) {
    int i = encontra_conjunto(c,v);
    if( i >= 0 ) return 0;

    c->elemento = (int *) realloc( c->elemento, (c->quantidade+1) * sizeof(int) );
    if(c->elemento == NULL ) exit(0);
    c->elemento[c->quantidade] = v;
    (c->quantidade)++;    
    return 1;
}

bool set_remove( Conjuntos * c, int v) {
    int i = encontra_conjunto(c, v);
    if(i<0) return 0;
    for( ; i< c->quantidade-1; i++) c->elemento[i] = c->elemento[i+1];
    c->elemento = (int *) realloc( c->elemento, c->quantidade-1);
    (c->quantidade)--;
}

int set_find( Conjuntos * c, int v) {
    int k;
    for(k=0;k<c->quantidade;k++) if(c->elemento[k] == v) return k;
    return -1;
}

void set_union( Conjuntos * c1, Conjuntos * c2, Conjuntos * u) {
    int i;
    if( !copia_conjunto(c1, u) ) exit(0);
    for(i=0;i<c2->quantidade;i++) adiciona_conjunto(u, c2->elemento[i] );
}

bool set_copy( Conjuntos * c1, Conjuntos * cpy ) {
    int i;
    if(cpy->quantidade > 0) return 0;
    cpy->elemento = (int *) calloc( c1->quantidade, sizeof(int) );
    cpy->quantidade = c1->quantidade;
    for(i=0;i<c1->quantidade;i++) cpy->elemento[i] = c1->elemento[i];
    return 1;
}