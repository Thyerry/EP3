#include "lista.h"
struct {
  celula l;
} struct_pilha;

typedef struct struct_pilha *pilha;

pilha cria_pilha();
void empilha(pilha, int );
int desempilha(pilha);
int vazia(pilha);

/*dale dale dale*/
