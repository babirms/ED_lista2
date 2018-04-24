#include <stdio.h>
#define TMAX 10
/*Refaça busca sequencial de um dado valor em lista sequencial, assumindo que o vetor possui chaves que podem ocorrer múltiplas vezes no vetor. Neste caso, seu algoritmo deve retornar, em um outro vetor, todas as posições onde a chave foi encontrada. */

int lista[TMAX];
int N = 7;

int busca(int vetor[], int valor){
  int pos = 0,i = 0;
  int chave[N];
  while(pos<N){
    if(vetor[pos]==valor){
      chave[i] = pos;
      i++;
    }
  pos++;
  }
  printf("Posições de %d: ",valor);
  for(int j=0;j<i;j++)
    printf("%d ",chave[j]);
  return chave[N];
}

int main(void) {
  for(int i = 0;i<N;i++){
    printf("Insira o numero: ");
    scanf("%d",&lista[i]);
  }
  busca(lista,5);
 
  return 0;
}
