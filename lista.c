#include "lista.h"
#include <stdlib.h>

celula cria_celula() {
  return (celula) malloc(sizeof(struct reg));
}

// Recebe uma célula não-nula p,
// insere o inteiro x em uma nova célula
// entre p e p->prox.
void insere(celula p, int x) {

  celula c = cria_celula();
  c->conteudo = x;
  c->prox = p->prox;
  p->prox = c;
}

// Devolve a primeira célula da lista l
// que contém o inteiro x (NULL, caso x
// não apareça na lista).
celula busca(celula l, int x) {
  celula p = l;
  while(p != NULL && p->conteudo != x)
    p = p->prox;
  return p;
}

// Recebe uma lista ligada de inteiros com cabeça l.
// Remove o primeiro nó que contém o inteiro x,
// não alterando a lista se x não aparece em nenhum nó.
void remove(celula l, int x) {

  celula r, s;

  r = l;
  s = l->prox;

  while(s != NULL && s->conteudo != x) {
    r = s;
    s = s->prox;
  }

  if(s != NULL) {
    r->prox = s->prox;
    free(s);
  }

}

// Recebe uma lista ligada de inteiros com cabeça l.
// Remove todos os nós que contém o inteiro x.
void removetodos(celula l, int x) {

  celula r, s;

  r = l;
  s = l->prox;

  while(s != NULL) {
    if(s->conteudo == x) {
          r->prox = s->prox;
          free(s);
          s = r->prox;
    }
    else {
      r = s;
      s = s->prox;
    }
  }

}

// Imprime uma lista com cabeça l.
void imprime(celula l) {

  celula r = l->prox;
  while(r != null) {
    printf("%i", r->conteudo);
    r = r->prox;
  }
}

// Recebe listas com cabeça l1 e l2.
// Concatena os elementos de l2 após os elementos de l1.
// (Ou seja, o último elemento de l1 aponta para o
// primeiro elemento de l2).
// A cabela l2 é liberada da memória.
void concatena(celula l1, celula l2) {

  celula r;

  for(r = l1; r->prox != NULL; r = r->prox);

  r->prox = l2->prox;

  free(l2);

}