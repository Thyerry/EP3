#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "lista.h"
#define M 19
#define TAMANHO_LISTA 20000

struct filaS {
    int conteudo;
    int repeticao;
    struct filaS *prox;
};
typedef struct filaS* Fila;
typedef struct filaS ElemF;

ElemL **tb;
Fila* criaFila();
int insereFila(Fila* f, int, int);
int removeFila(Fila* f);
void contabiliza(Lista* l, int);

int piramide(Lista* l);
Fila* RLE(Lista* l);
