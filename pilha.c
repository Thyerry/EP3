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

void esvaziaPilha(Pilha* p){
  if (p != NULL) {
    ElemP* no;
    while((*p) != NULL){
      no = *p;
      *p = (*p)->prox;
      free(no);
    }
    free(p);
  }
}

int pilhaVazia(Pilha* p){
  if (p == NULL) {
    return 1;
  }
  if(*pi == NULL){
    return 0;
  }
  return 0;
}

int tamanhoPilha(Pilha* p){
  if (p == NULL) {
    return 0;
  }
  int cont = 0;
  ElemP* no = *p;

  while(no != NULL){
    cont++;
    no = no->prox;
  }
  return cont;
}

void empilha(Pilha* p, int novo) {
  if (p == NULL) 
    return 0;
  
  ElemP* no = (ElemP*) malloc(sizeof(ElemP))
  if (no == NULL)
    return 0;

  no->conteudo = novo;
  no->prox = (*pi);
  *pi = no;
  return 1;
  
}

void desempilha(Pilha* p){
  if (p == NULL) 
    return 0;
  if((*p) == NULL)
    return 0;

    ElemP *no = *p;
    *p = no->prox;
    free(no);
    return 1;
}

int consultaTopo(Pilha* p){
  if(p == NULL) return 0;
  if((*p) == NULL) return 0;
  int topo = (*pi)->conteudo;
  return topo;
}