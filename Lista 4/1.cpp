#include <stdio.h>
#define TMAX 10

/*Especifique o que acontece em cada iteração dos algoritmos de ordenação por seleção, bubblesort, mergesort e quicksort, utilizando as seguintes sequências de dados de entrada:
      (a) S1 = {2, 4, 6, 8, 10, 12}
      (b) S2 = {11, 9, 7, 5, 3, 1}
      (c) S3 = {5, 7, 2, 8, 1, 6}
      (d) S4 = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1}
      (e) S5 = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79}
Em cada caso, mostre o número de comparações e trocas que realizam na ordenação de sequências.*/

int s1[TMAX] = {11,9,7,5,3,1};
int n1 = 6;

int s3[TMAX] = {5, 7, 2, 8, 1, 6};
int n3 = 6;

// BUBBLE SORT //
void bubble_sort(int lista[],int N){
  int pos = 0;
  int troca = 0;
  int aux;
  for(int i=0;i<N-1;i++){
    for(int j = 0;j<N-1;j++){
      if(lista[j]>lista[j+1]){
        aux = lista[j];
        lista[j]=lista[j+1];
        lista[j+1]=aux;
        troca++;
      }
    }
  }
  
  printf("Bubble Sort | %d trocas \n",troca);
  
}

// SELECTION SORT

void selection_sort(int lista[],int N){
  int menor = 99999;
  int aux;
  int pos = 0;
  int trocas = 0;
  while(pos<N){
    for(int i = pos; i<N;i++){
      if(lista[i]<menor){  
        menor = lista[i];
        aux = lista[pos];
        lista[pos] = menor;
        lista[i] = aux;
        trocas++;
      }
    }
    menor = 99999;
    pos++;
  }
  printf("Selection Sort | %d trocas \n",trocas);
  
}


void imprime(int lista[],int N){
 printf("Lista ordenada: ");
 for(int i=0;i<N;i++){
   printf("%d ",lista[i]);
  }
  printf("\n");
}
int main(void) {
  bubble_sort(s1,n1);
  imprime(s1,n1);
  selection_sort(s3,n3);
  imprime(s3,n3);
  
  return 0;
}
