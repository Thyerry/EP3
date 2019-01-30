#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "lista.h"
struct filaS {
    int conteudo;
    int repeticao;
    struct filaS *prox;
};
typedef struct filaS* Fila;
typedef struct filaS ElemF;
ElemL *tb;
Fila* criaFila();
int insereFila(Fila* f, int, int);
int removeFila(Fila* f);
int piramide(Lista* l);
Fila* RLE(Lista* l);
