#include "lista.h"
struct elemento{
  struct aluno dados;
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

int insereListaInicio(Lista* li, struct aluno al){
  if (li == NULL) {
      return 0;
  }
  Elem* no = (Elem*) malloc(sizeof(Elem));
  if (no == NULL) {
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
  }
  
  
}