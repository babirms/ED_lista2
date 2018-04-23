#include <stdio.h>
#define TMAX 10

/*Escreva uma função que verifique se um vetor V de N elementos está em ordem crescente*/

int vetor[TMAX];
int N = 7;


void verifica(int vetor[]){
  int pos = 0;
  while(pos<N-1){
    if(vetor[pos]>vetor[pos+1]){
      printf("Lista não ordenada.");
      break;
    }
    pos++;
  }
}
int main(void) {
  for(int i = 0; i<N; i++)
    scanf("%d ",&vetor[i]);
    verifica(vetor);
  
  
  
  return 0;
}
