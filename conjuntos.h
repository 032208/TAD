//nomeias as funções e cria as structs
typedef struct conjuntos
{
    int * elemento;
    int quantidade;
}Conjuntos;

typedef char bool;

Conjuntos * novo_conjunto(void);

/* Deleta um conjunto existente (c) */
void deleta_conjunto( Conjuntos * c );

/* Imprime o conunto na tela */
void imprime_conjunto( Conjuntos * c);

/* Adiciona um novo elemento no conjunto e retorna TRUE.
   Retorna FALSE caso contrário.
 */
bool adiciona_conjunto( Conjuntos * c, int v);

bool remove_conjunto( Conjuntos * c, int v);

/* Retorna o indice do valor v no conjunto s. Retorna -1
   caso v não exista */
int encontra_conjunto( Conjuntos * c, int v);

/* Criar o conjunto u = s1 U s2*/
void uniao_conjunto( Conjuntos * c1, Conjuntos * c2, Conjuntos * u);

bool copia_conjunto( Conjuntos * c1, Conjuntos * cpy );