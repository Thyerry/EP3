#include "pilha.h"
#include "lista.h"
#include <stdlib.h>
struct {
  Elem l;
} struct_pilha;

pilha cria_pilha() {
  pilha p = (pilha) malloc(sizeof(struct_pilha));
  p->l = cria_celula();
  p->l->prox = NULL;
}

void empilha(pilha p, int x) {
  insere(p->l, x);
}

int desempilha(pilha p) {
  if(vazia(p))
    exit(1);

  celula c = p->l->prox;
  int x = c->conteudo;
  p->l->prox = c->prox;
  free(c);
  return x;
}

int vazia(pilha p) {
  return p->l->prox == NULL;
}