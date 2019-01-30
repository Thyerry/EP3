#include "pilha.h"
#include "lista.h"
#include <stdlib.h>
struct elementoP{
  int conteudo;
  struct elementoP *prox;
};

typedef struct elementoP ElemP;

Pilha* criaPilha() {
  Pilha p = (Pilha) malloc(sizeof(Pilha));
  if (p != NULL) 
    *p = NULL;

  return p;
}

void esvazia(Pilha* p){
  if (p != NULL) {
    ElemP* no;
    while((*p) != NULL){
      no = *p;
      *p = (*p)-prox;
      free(no);
    }
    free(p);
  }
}