#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "lista.h"
typedef struct
{
    int conteudo;
    int repeticao;
}Carreira;

int maiorPiramide;
int piramide(Lista* l);
void RLE(Lista* l);
