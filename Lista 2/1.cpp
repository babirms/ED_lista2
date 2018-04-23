#include <stdio.h>
#define TMAX 10

/*Suponha que, a parte do vetor P de TMAX elementos seja ocupada por uma pilha somente entre as posições de 1 a T, sendo T < TMAX. Escreva o código das funções empilha(), desempilha(), para essa pilha considerando os limites estabelecidos.*/

int P[TMAX];
int T = 0;

int empilha(int vetor[],int valor){
  if(T==TMAX) // verifica se está cheia
    return 0;
  else{
  vetor[T]=valor;
  T++;
  return 1;  
  }
}

int desempilha(int vetor[]){
  if(T==0)
    printf("Lista vazia.");
  else
    { 
      T--;
    }
}

void imprime(){
  printf("Pilha: \n");
  for(int i = 0;i<T;i++){
    printf("%d \n",P[i]);
  }
}

int main(void) {
  empilha(P,1);
  empilha(P,2);
  empilha(P,3);
  empilha(P,4);
  empilha(P,5);
  empilha(P,6);
  empilha(P,7);
  empilha(P,8);
  empilha(P,9);
  empilha(P,10);
  empilha(P,11); // não aparece pq passa de TMAX
  imprime();
  desempilha(P);
  desempilha(P);
  desempilha(P);
  imprime();
  return 0;
}
