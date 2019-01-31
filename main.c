#include "funcoes.h"

int main(void)
{
  int insert;
  Lista *li;
  li = criaLista();
  
  FILE *arq = fopen("seq.dat", "r");

  for (int i = 0; i < TAMANHO_LISTA; i++)
  {
    fscanf(arq, "%d ", &insert);
    insereInicio(li, insert);
  }
  tb = (ElemL **)malloc(M * sizeof(ElemL *));
  int tamanho = piramide(li);

  printf("Hello World\n");
  return 0;
}
