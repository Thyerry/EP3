#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"
#define MAXTAM 5000

typedef struct
{
    int Item[MAXTAM];
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

int pilhaCheia(pilha *p)
{
    if (p->Topo == MAXTAM - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int empilha(pilha *p, int x)
{
    if(pilha_Cheia(p) == 1){
        printf("Pilha cheia \n");
    }
    else
    {
        p->Topo++;
        p->Item[p->Topo] = x;
    }

}
int desempilha(pilha *p){
    int aux;
    if(pilha_Vazia(p) == 1)
        printf("Pilha cheia \n");

    else
    {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }

}

int main(void) {

  pilha p, q;
  p = cria_pilha();
  q = cria_pilha();

  printf("Hello World\n");
  return 0;
}
