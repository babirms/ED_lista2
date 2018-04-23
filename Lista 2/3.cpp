#include <stdio.h>
#define TMAX 20

/*Seja um vetor P de TMAX elementos inteiros. Duas pilhas podem ser manipuladas neste mesmo vetor. A pilha P1 vai ser manipulada em uma extremidade e a pilha P2 na outra extremidade do vetor.
(a) escreva o procedimento empilha(Pilha, valor) que empilha um elemento na Pilha (que pode ser P1 ou P2) e o valor dado.
(b) escreva o procedimento desempilha(Pilha) que desempilha o topo da Pilha (que pode ser P1 ou P2 .*/

int P[TMAX];
int T = 0;
int T1 = 0;
int T2 = TMAX-1;

int empilha(int pilha[],int valor){
  if(T == TMAX){
    return 0; // lista cheia
  }
  else{
    int px;
    printf("Em qual pilha deseja inserir? [1 ou 2]");
    scanf("%d",&px);
    if(px == 1){
      pilha[T1] = valor;
      T1++;
    }
    else{
      pilha[T2] = valor;
      T2--;
    }
    T++;
  }
}

void imprime(){
  printf("Pilha: \n");
  for(int i=0;i<TMAX;i++){
    printf("%d",P[i]);
}
}

int main(void) {
  empilha(P,1);
  empilha(P,2);
  empilha(P,3);
  empilha(P,4);
  empilha(P,5);
  empilha(P,20);
  empilha(P,19);
  empilha(P,18);
  empilha(P,17);
  empilha(P,16);
  imprime();
  
  return 0;
}
