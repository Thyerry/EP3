#include "funcoes.h"
maiorPiramide = 0;


int piramide(Lista* l){

    if(l == NULL) return 0;
    if((*l) == NULL) return 0;

    Pilha *p = criaPilha();
    ElemL* aux = *l;
    empilha(p, l->conteudo);
    int cont, tamanho;

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

