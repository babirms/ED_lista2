#include <stdio.h>
#define TMAX 10
/*Escreva uma função que coloque em ordem lexicográfica um vetor de inteiros*/

int vetor[TMAX];
int N = 5;

void ordena(){
  int pos = 0;
  int aux;
  while(pos<N){
    for(int i=0;i<N;i++){
      if(vetor[pos]<vetor[i]){ 
        aux = vetor[i];
        vetor[i]=vetor[pos];
        vetor[pos] = aux;
      }
    }
    pos++;
  }
}

void imprime(){
  printf("Vetor: \n");
  for(int i=0;i<N;i++)
    printf("%d \n",vetor[i]);
}

int main(void) {
  
  // inserindo os elementos do vetor
  for(int i = 0; i<N; i++)
    scanf("%d",&vetor[i]);
    
  imprime();
  ordena();
  imprime();
  
  return 0;
}
