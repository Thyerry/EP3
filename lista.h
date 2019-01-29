struct aluno{
  int matricula;
  char nome[30];
  float f1, f2, f3;
};
typedef struct elemento* Lista;

Lista* criaLista();
void liberaLista(Lista* li);
int tamanhoLista(Lista* li);
int listaVazia(Lista* li);
int insereLista(Lista* li, struct aluno al);

