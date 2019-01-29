#include "lista.h"
struct elemento{
  int conteudo;
  struct elemento *prox;
};
typedef struct elemento Elem;

Lista* criaLista(){
  Lista* li = (Lista*) malloc(sizeof(Lista));
  if(li != NULL)
    *li = NULL;
  
  return li;
}

void liberaLista(Lista* li){
  if(li != NULL){
    Elem* no;
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
  Elem* no = *li;
  while(no != NULL){
    cont++;
    no = no->prox;
  }
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
  Elem* no = (Elem*) malloc(sizeof(Elem));
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
  Elem* no = (Elem*) malloc(sizeof(Elem));
  if (no->prox != NULL) {
    no->conteudo = novo;
    no->prox = NULL;
    if ((*li) == NULL) {
      *li = no;
    } else {
      Elem *aux = *li;
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
  
  Elem *no = (Elem*) malloc(sizeof(Elem));

  if (no == NULL)
    return 0;

  no->conteudo = novo;

  if(listaVazia(li)){
    no->prox = (*li);
    *li = no;
    return 1;
  }

  else {
    Elem *ant, *atual = *li;
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