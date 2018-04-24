#include <stdio.h>

int vetor[8] = {5,7,8,9,1,3,6,11};

// estudando Merge

void Merge(int A[],int e,int meio,int d){
  int i = 0; // percorre a primeira metade
  int j = meio+1; // percorre a segunda metade
  int k = 0; // percorre a lista auxiliar
  int C[d+1];
  
  // percorrer as duas metades ao mesmo tempo
  while(i<=meio && j<=d){
    if(A[i]<A[j]){
      C[k] = A[i];
      k++;
      i++;
    }
    else {
      C[k] = A[j];
      k++;
      j++;
    }
  }
  
  // percorrer a primeira metade, caso ela seja maior que a segunda
  while(i<=meio){
    C[k] = A[i];
    k++;
    i++;
  }
  
  // percorrer a segunda metade, caso ela seja maior que a primeira
  while(j<=d){
    C[k]= A[j];
    j++;
    k++;
  }
  
  // alocar os elementos do vetor auxiliar C de volta em A para que ela seja ordenada
  k = 0;
  for(i=e;i<d;i++){
    A[i] = C[k];
    k++;
  }
}

void imprime(){
  printf("Lista ordenada: ");
  for(int i = 0; i<8;i++){
    printf("%d ",vetor[i]);
  }
}
int main(void) {
  Merge(vetor,0,3,7);
  imprime();
  
  return 0;
}
