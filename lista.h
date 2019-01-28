struct {
  int conteudo;
  struct reg *prox;
} reg;

typedef struct reg *celula;

void insere(celula, int);
celula cria_celula();
celula busca(celula, int);
void removeC(celula, int);
void removetodos(celula, int);
