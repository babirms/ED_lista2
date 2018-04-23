#include <stdio.h>
#define TMAX 10

/*Considere uma pilha P vazia e uma fila F não vazia. Utilizando apenas os testes de fila e pilha vazias, as operações enfila(), desenfila(), empilha(), desempilha(), de acordo com a
necessidade, escreva uma função que inverta a ordem dos elementos da fila F.*/

int P[TMAX];
int F[TMAX] = {1,2,3,4,5};
int Tp = 0;
int Tf = 5;
int inicio = 0;

// Procedimentos Pilha
int empilha(int valor){
  if(Tp == TMAX)
    return 0;
  else{
    P[Tp] = valor;
    Tp++;
    return 1;
  }
}

int desempilha(int vetor[],int n){
  int aux;
  if(n<0)
    return 0;
  else{
    aux = vetor[n];
    n--;
    
    return aux;
  }
}

// Inverter Fila

void inverte(){
  int aux[TMAX];
  int n = Tf-1; 
  // copiar os elementos de Fila para Aux
  for(int i=0;i<Tf;i++){
    aux[i] = F[i]; 
  }
  for(int i=0;i<Tf;i++){
    F[i] = desempilha(aux,n); 
    n--;
  }
}

// Procedimentos Fila

int enfila(int valor){
   if(Tf == TMAX)
    return 0;
  else{
    F[Tf] = valor;
    Tf++;
    return 1;
  }
}

int desenfila(){
  int aux;
  if(Tf == 0)
    return 0;
  else{
    aux = F[inicio];
    for(int i=0;i<Tf-1;i++){
      F[i]= F[i+1];
    }
    Tf--;
    return aux;
  }
}

// IMPRIME

void imprime(int vetor[],int topo){
  for(int i=0; i<topo;i++){
    printf("%d \n",vetor[i]);
  }
   printf("\n");
}



int main(void) {
  enfila(34);
  desenfila();
  printf("Fila: \n");
  imprime(F,Tf);
  inverte();
  printf("Fila Invertida: \n");
  imprime(F,Tf);
  return 0;
}
