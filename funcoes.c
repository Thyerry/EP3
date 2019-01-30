/**
 * Exercício Programa 3: Análise de sequências
 * Aluno: Thyérry Nunes dos Santos
 * Universidade Federal Rural de Pernambuco
 * Disciplina: Algoritmos e Estruturas de Dados
 * Docente: Rodrigo de Souza
*/

#include "funcoes.h"

maiorPiramide = 0;
Fila* criaFila(){
    Fila f = (Fila*) malloc(sizeof(Fila));
    if(f !=NULL)
        *f = NULL;
    return f;
}

int insereFila(Fila* f, int novo, int qtd){
  if (f == NULL) {
      return 0;
  }
  ElemF* no = (ElemF*) malloc(sizeof(ElemF));
  if (no->prox != NULL) {

    no->conteudo = novo;
    no->repeticao= qtd;
    no->prox = NULL;

    if ((*f) == NULL) {
      *f = no;
    } else {
      ElemF *aux = *f;
      while(aux->prox != NULL){
        aux = aux->prox;
      }
      aux->prox = no;
    }
    
    *f = no;
    return 1;
  }
  
}

int removeFila(Fila* f){
  if (f == NULL) {
    return 0;
  }
  if ((*f) == NULL) {
    return 0;
  }

  ElemF *no = *f;
  *f = no->prox;
  free(no);
  return 1;
}
/**
 * I-1
*/

/**
 * I-2
*/

/**
 * I-3
 * A função piramide recebe uma lista de numeros inteiros
 * e devolve o valor do tamanho da maior piramide 
 * encontrada nessa lista.
*/
int piramide(Lista* l){

    if(l == NULL) return 0;
    if((*l) == NULL) return 0;

    Pilha *p = criaPilha();
    ElemL* aux = *l;
    empilha(p, aux->conteudo);
    int cont = 1, tamanho;

    while(aux != NULL){
        if (aux->conteudo > consultaTopo(p)) {              // Subida da piramide
            empilha(p, aux->conteudo);
            aux = aux->prox;
            cont++;
        }

        else if(aux->conteudo == consultaTopo(p)){          // Chegada no topo da piramide
            empilha(p, aux->conteudo);
            aux = aux->prox;
            cont++;
            while(aux != NULL && cont == 0){ 
                if(p == NULL){                              // Verifica o fim da piramide
                    if(cont == tamanho)
                     tamanho = cont;
                     
                    cont = 0;
                }
                else if (aux->conteudo == consultaTopo(p)){ // Inicio da descida da piramide
                    aux = aux->prox;
                    desempilha(p);
                    cont++;
                }  
                
                else{                                       // Se chegou aqui, não é piramide
                    esvaziaPilha(p);
                    cont = 0;
                }
            }
        }
    }
    maiorPiramide = tamanho;
    return tamanho;
}


/**
 * RLE
 * Cria uma fila que no formato Run-Length Encoding
 * (RLE, mais informações https://www.fileformat.info/mirror/egff/ch09_03.htm)
 * Recebe a lista com valores inteiros e devolve uma fila com
 * os valores no formato de RLE.
 * 
*/
Fila* RLE(Lista* l) {
    if (l != NULL) {            // Verifica se a lista não é nula 
        return 0;
    }
    if((*l) != NULL) {
        return 0;
    }
    
    //FILE *arq_RLE = fopen("RLE.dat", "w");
    ElemL* aux = *l;
    Fila f = criaFila();
    int valor = aux->conteudo;                      //variavel que recebe o valor atual na lista conforme ela for percorrida
    int rec = 1;                                    //variavel que conta as ocorrencias seguidas do em valor

    while(aux != NULL){
        if(valor == aux->conteudo){                 //identifica se o valor já é repetido
            rec++;
            if(aux->prox == NULL){                  //se o proximo valor for nulo, printa e insere na fila o valor e rec atuais.
                printf("%d.%d ", rec, valor);
                insereFila(f, valor, rec);
                aux = aux->prox;
            }
            else
                aux = aux->prox;                    //se não, vai para o proximo item da lista.
        }
        else{                                       //se o valor não for repetido, printa, insere na fila e continua a percorrer a lista.
            printf("%d.%d ", rec, valor);       
            insereFila(f, valor, rec);
            valor = aux->conteudo;
            rec = 1;
            aux = aux->prox;
        }
    }
    
    /*fclose(arq_RLE);*/
    return f;
}