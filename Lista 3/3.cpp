#include <stdio.h>
#include <stdlib.h>

/*Sejam duas listas encadeadas apontadas pelos ponteiros head1 e head 2. Especifique um pseudo-algoritmo que identifique se as duas listas são iguais ou não. */

typedef struct lista {
      int valor;
      struct lista* prox; } Lista;
      
void Insere_I(Lista **l,int valor){
  Lista *novo;
  novo = (Lista*)malloc(sizeof(Lista));
  novo->valor = valor;
  novo->prox = *l;
  *l = novo;
}

void imprime(Lista** l){
  Lista *p = *l;
  while(p!=NULL){
    printf("%d \n",*p);
    p=p->prox;
  }
}

void compara(Lista **l1, Lista **l2){
  Lista* p1 = *l1;
  Lista* p2 = *l2;
  int contador_I = 0; // conta quantos elementos são iguais
  int contador_p = 0; // conta quantos elementos existem na                          lista p1
  while(p1!=NULL){
    if(p1->valor == p2->valor){
      contador_I++;
    }
    p1=p1->prox;
    p2=p2->prox;
    contador_p++;
    
  }
  printf("contador p: %d \n",contador_p);
  printf("contador i: %d \n",contador_I);
  if(contador_I == contador_p)
    printf("Listas iguais. \n");
  else
    printf("Listas diferentes. \n");
}
      
int main(void) {
  Lista *head1 = NULL;
  Lista *head2 = NULL;
  
  // Adicionando elementos na head1
  Insere_I(&head1,33);
  Insere_I(&head1,12);
  Insere_I(&head1,8);
  Insere_I(&head1,1);
  Insere_I(&head1,182);
  printf("Head1: \n");
  imprime(&head1);
  
  printf("\n \n");
  
  // Adicionando elementos na head2
  Insere_I(&head2,33);
  Insere_I(&head2,12);
  Insere_I(&head2,8);
  Insere_I(&head2,12);
  Insere_I(&head2,182);
  printf("Head2: \n");
  imprime(&head2);
  
  // Comparando se as duas são iguais
  compara(&head1,&head2);
  
  return 0;
}
