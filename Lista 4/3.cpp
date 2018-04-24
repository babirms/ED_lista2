#include <stdio.h>

/*Escreva o pseudo algoritmo do algoritmo de ordena��o insertsort, definido de acordo com
os seguintes passos:
� O primeiro elemento da lista est� ordenado (ou seja, na posi��o correta);
� A partir do segundo elemento, insere cada elemento na posi��o correta entre entre aqueles j� ordenados;
� O elemento � inserido na posi��o adequada movendo-se todos os elementos maiores para posi��o seguinte do vetor;
� Essa procura pode ser realizada sequencialmente ou por busca bin�ria*/

int vetor[5] = {5,3,4,2,1};

void insertion(int vetor[],int n){
  for (int i = 1; i < n; i++) {
    int j = i;

    while (j > 0 && vetor[j-1] > vetor[j]) {
      int aux = vetor[j-1];
      vetor[j-1] = vetor[j];
      vetor[j] = aux;
      j--;
    }
  }
}

void imprime(int lista[],int N){
 printf("Lista ordenada: ");
 for(int i=0;i<N;i++){
   printf("%d ",lista[i]);
  }
  printf("\n");
}


int main(void) {
  insertion(vetor,5);
  imprime(vetor,5);
  return 0;
}
