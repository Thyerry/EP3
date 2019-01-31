#include <stdlib.h>
#include <stdio.h>

struct elementoL{
  int conteudo, ocorrencia;
  struct elementoL *prox;
};

typedef struct elementoL* Lista;
typedef struct elementoL ElemL;

Lista* criaLista();
void liberaLista(Lista* li);
int tamanhoLista(Lista* li);
int listaVazia(Lista* li);
int insereInicio(Lista* li, int);
int insereFinal(Lista* li, int);
int insereOrdenado(Lista* li, int);
int removeInicio(Lista* li);
int removeFinal(Lista* li);
int removeQualquer(Lista* li, int);
