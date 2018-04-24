#include<stdio.h>

int s4[12] = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};

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
	Quick(s4,0,11);
	 imprime(s4,12);
	

}
