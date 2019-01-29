typedef struct elemento* Lista;

Lista* criaLista();
void liberaLista(Lista* li);
int tamanhoLista(Lista* li);
int listaVazia(Lista* li);
int insereInicio(Lista* li, int);
int insereFinal(Lista* li, int);
int insereOrdenado(Lista* li, int);
int removeInicio(Lista* li);
int removeFinal(Lista* li);
int removeQualquer(Lista* li, int);
