#include "lista.h"

struct elementoL{
  int conteudo;
  struct elementoL *prox;
};
typedef struct elemento ElemL;

Lista* criaLista(){
  Lista* li = (Lista*) malloc(sizeof(Lista));
  if(li != NULL)
    *li = NULL;
  
  return li;
}

ElemL busca(Lista* li, int item){
  ElemL *resultado = *li;
  while(resultado != NULL && resultado->conteudo != item)
    resultado = resultado->conteudo;

  return *resultado;
}

void liberaLista(Lista* li){
  if(li != NULL){
    ElemL* no;
    while((*li) != NULL){
      no = *li;
      *li = (*li)->prox;
      free(no);
    }
    free(li);
  }
}

int tamanhoLista(Lista* li){
  if(li == NULL) return 0;
  int cont = 0;
  ElemL* no = *li;
  while(no != NULL){
    cont++;
    no = no->prox;
  }
  return cont;
}

int listaVazia(Lista* li){
  if(li == NULL) return 1;
  if (*li == NULL) return 1;
  return 0;
  
}

int insereInicio(Lista* li, int novo){
  if (li == NULL) {
      return 0;
  }
  ElemL* no = (ElemL*) malloc(sizeof(ElemL));
  if (no == NULL) {
    no->conteudo = novo;
    no->prox = (*li);
    *li = no;
    return 1;
  }
  
}

int insereFinal(Lista* li, int novo){
  if (li == NULL) {
      return 0;
  }
  ElemL* no = (ElemL*) malloc(sizeof(ElemL));
  if (no->prox != NULL) {
    no->conteudo = novo;
    no->prox = NULL;
    if ((*li) == NULL) {
      *li = no;
    } else {
      ElemL *aux = *li;
      while(aux->prox != NULL){
        aux = aux->prox;
      }
      aux->prox = no;
    }
    
    *li = no;
    return 1;
  }
  
}

int insereOrdenado(Lista* li, int novo){
  if (li == NULL) 
    return 0;
  
  ElemL *no = (ElemL*) malloc(sizeof(ElemL));

  if (no == NULL)
    return 0;

  no->conteudo = novo;

  if(listaVazia(li)){
    no->prox = (*li);
    *li = no;
    return 1;
  }

  else {
    ElemL *ant, *atual = *li;
    while(atual !=NULL && atual->conteudo < novo){
      ant = atual;
      atual = atual->prox;
    }
    if (atual == *li) {
      no->prox = (*li);
      *li = no;
    } 
    else {
      no->prox = ant->prox;
      ant->prox = no;
    }
    return 1;
  }
}

int removeInicio(Lista* li){
  if (li == NULL) {
    return 0;
  }
  if ((*li) == NULL) {
    return 0;
  }

  ElemL *no = *li;
  *li = no->prox;
  free(no);
  return 1;
}

int removeFinal(Lista* li){
  if (li == NULL) {
    return 0;
  }
  if ((*li) == NULL) {
    return 0;
  }

  ElemL *ant, *no = *li;
  while(no->prox != NULL){
    ant = no;
    no = no->prox;
  }
  if (no == (*li)) {
    *li = no->prox;
  }
  else
    ant->prox = no->prox;
  
  free(no);
  return 1;
}

int removeValor(Lista* li, int item){
  if (li == NULL)
    return 0;
  
  ElemL *ant, *no = *li;
  while(no != NULL && no->conteudo != item){
    ant = no;
    no = no->prox;
  }
  if(no == NULL) 
    return 0;

  if(no == *li)
    *li = no->prox;

  else 
    ant->prox = no->prox;

  free(no);

  return 1;
  
}