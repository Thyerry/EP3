#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

/*typedef struct
{
    int Item[MAXTAM];
    int Topo;
} pilha;

void pilha_Inicia(pilha *p)
{
    p->Topo = -1;
}

int pilha_Vazia(pilha *p)
{
    if (p->Topo == -1)
        return 1;

    else
        return 0;
}

int pilha_Cheia(pilha *p)
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

int pilha_Insere(pilha *p, int x)
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
int pilha_Retira(pilha *p){
    int aux;
    if(pilha_Vazia(p) == 1)
        printf("Pilha cheia \n");

    else
    {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }

}*/

int main(void) {

  pilha p, q;
  p = cria_pilha();
  q = cria_pilha();

  printf("Hello World\n");
  return 0;
}
