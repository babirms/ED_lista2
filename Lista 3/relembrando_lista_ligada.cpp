#include <stdio.h>
#include <stdlib.h>

// ESTUDANDO LISTA ENCADEADA SIMPLES

/* Declaração do No utilizado */

typedef struct no{
  int dado;
  struct no *prox; } No;

/* Impressão */  
  
void imprime(No** l){
  No* p=*l;

  while(p!=NULL){
    printf("%d \n",*p);
    p=p->prox;
   
  }
}

/* Inserção no início */
void Insere_I(No **l,int valor){
  No* novo;
  novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = *l;
  *l = novo;
}

/* Inserção no Fim */
void Insere_F(No **l, int valor){
  No* novo;
  novo = (No*)malloc(sizeof(No));
  novo->dado =  valor;
  novo->prox =  NULL;
  
  // criando No auxiliar para percorrer a lista
  No* p = *l;
  while(p->prox!= NULL)
    p = p->prox;
  p->prox = novo;
}

/* Remoção no Início */
int remove_I(No**l){
  int aux = (*l)->dado;
  *l = (*l)->prox;
  return aux;
}

/* Remoção no Final */
int remove_F(No** l){
  int aux = (*l)->dado;
  No* p = *l;
  while(p->prox->prox!=NULL)
    p=p->prox;
  p->prox = NULL;
  return aux;
}

int main(void) {
  No *lista;
  
  lista=(No*)malloc(sizeof(No));
  lista->dado = 76;
  lista->prox = NULL;
  
  printf("Lista inicial: \n");
  imprime(&lista);
  printf("\n \n");
  printf("Inserir no início: \n");
  Insere_I(&lista,44);
  imprime(&lista);
  printf("\n \n");
  printf("Inserir no fim: \n");
  Insere_F(&lista,88);
  imprime(&lista);
  printf("\n \n");
  printf("Remover no Início: \n");
  remove_I(&lista);
  imprime(&lista);
  printf("\n \n");
  printf("Remover no fim: \n");
  remove_F(&lista);
  imprime(&lista);
  return 0;
}
