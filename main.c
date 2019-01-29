#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"
#define MAXTAM 5000

typedef struct
{
    int Topo;
} pilha;

void criaPilha(pilha *p)
{
    p->Topo = -1;
} 

int pilhaVazia(pilha *p)
{
    if (p->Topo == -1)
        return 1;

    else
        return 0;
}

int empilha(pilha *p, int x)
{
    p->Topo++;
}
int desempilha(pilha *p){
    int aux;
    if(pilha_Vazia(p) == 1)
        printf("Pilha cheia \n");

    else
    {
        p->Topo--;
        return aux;
    }

}

int main(void) {

  Lista *li;

  li = criaLista();
  printf("Hello World\n");
  return 0;
}
