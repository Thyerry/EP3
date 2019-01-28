#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
    int Item[MAXTAM];
    int Topo;
} TPilha;

void TPilha_Inicia(TPilha *p){
    p->Topo = -1;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
