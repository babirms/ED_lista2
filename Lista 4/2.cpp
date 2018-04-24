#include <stdio.h>

/*Especifique o que acontece em cada iteração dos algoritmos de ordenação por seleção, bubblesort, mergesort e quicksort, utilizando as seguintes sequências de dados de entrada:
      (a) S1 = {2, 4, 6, 8, 10, 12}
      (b) S2 = {11, 9, 7, 5, 3, 1}
      (c) S3 = {5, 7, 2, 8, 1, 6}
      (d) S4 = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1}
      (e) S5 = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79}
Em cada caso, mostre o número de comparações e trocas que realizam na ordenação de sequências.*/

int vet[6] = {5, 7, 2, 8, 1, 6};
int s1[6] = {11,9,7,5,3,1};
int s4[12] = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
int s5[10] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};

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

// MERGE SORT 
void Merge(int A[], int e, int m, int d){
    int i = e;
    int j = m+1;
    int k = 0;
    int C[d+1];
      
    while ((i<=m) && (j<=d)){
        if (A[i] < A[j]){
            C[k] = A[i];
            k++;
            i++;
        }else{
            C[k] = A[j];
            k++;
            j++;
        }
    }
    while(i <= m){
        C[k] = A[i];
        i++;
        k++;
    }
    while (j <= d){
        C[k] = A[j];
        j++;
        k++;
    }
    k = 0;
    for(i=e;i<=d;i++){
        A[i] = C[k];
        k++;
    }

}

void MergeSort (int vet[], int e, int d){

    if(e < d){

        int i = (e+d)/2;
        MergeSort(vet , e, i);
        MergeSort(vet , i+1, d);
        Merge(vet, e, i, d);
    }
    
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

// QUICKSORT 

void Quick(int vetor[], int inicio, int fim){
   
   int pivo, aux, i, j, meio,trocas=0;
   
   i = inicio;
   j = fim;
   
   meio = ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
         trocas++;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

  
}

void imprime(int lista[],int N){
 printf("Lista ordenada: ");
 for(int i=0;i<N;i++){
   printf("%d ",lista[i]);
  }
  printf("\n");
}

int main(){
    printf("MergeSort: \n");
    MergeSort (vet, 0, 5);
    imprime(vet,6);
    selection_sort(s1,6);
    imprime(s1,6);
    bubble_sort(s4,12);
    imprime(s4,12);
    printf("QuikSort: \n");
    Quick(s5,0,9);
    imprime(s5,10);
return 0;
}
