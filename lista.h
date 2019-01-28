#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct reg{
  int conteudo;
  struct reg *prox;
};

typedef struct reg *celula;

void insere(celula, int);
celula cria_celula();
celula busca(celula, int);
void removeC(celula, int);
void removetodos(celula, int);
#endif // LISTA_H_INCLUDED
