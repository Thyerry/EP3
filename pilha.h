#include "lista.h"
#include "lista.c"
#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct struct_pilha* pilha;

pilha cria_pilha();
void empilha(pilha, int );
int desempilha(pilha);
int vazia(pilha);

#endif // PILHA_H_INCLUDED
/*dale dale dale*/
